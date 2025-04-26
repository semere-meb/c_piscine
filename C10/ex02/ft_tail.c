#include <errno.h>
#include <fcntl.h>
#include <libgen.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int ft_strlen(char *str) {
    int len;

    len = 0;
    while (*str++)
        len++;
    return (len);
}

void print_error(char *prog_name, char *msg) {
    write(2, prog_name, ft_strlen(prog_name));
    write(2, ": ", 2);
    write(2, msg, ft_strlen(msg));
    write(2, ": ", 2);
    write(2, strerror(errno), ft_strlen(strerror(errno)));
    write(2, "\n", 1);
}

int display_file(int fd, int bytes_to_read) {
    int bytes_read;
    int ret_code;
    char *buf;
    int i;

    ret_code = 0;
    buf = malloc(2 * bytes_to_read * sizeof(char));
    if (!buf)
        return (-1);
    bytes_read = 1;
    while (bytes_read > 0) {
        bytes_read = read(fd, buf, 2 * bytes_to_read);
        if (bytes_read <= 0)
            ret_code = close(fd);
    }
    i = 0;
    while (i < bytes_to_read) {
        write(1, &buf[(i + bytes_read + bytes_to_read) % (2 * bytes_to_read)],
              1);
        i++;
    }
    return (ret_code);
}

int str_to_int(char *str) {
    int value;

    value = 0;
    while (*str) {
        if (*str >= '0' && *str <= '9') {
            value *= 10;
            value += (*str - '0');
        }
        str++;
    }
    return (value);
}

void clean_argv(char ***argv_ptr, int *argc_ptr, int index) {
    int i;
    int j;
    char *temp;
    char **argv;

    i = index;
    j = 0;
    argv = *argv_ptr;
    while (i < *argc_ptr - 2) {
        temp = argv[i + 2];
        argv[i + 2] = argv[i + 1];
        argv[i + 1] = argv[i];
        argv[i] = temp;
        i++;
    }
    (*argc_ptr) -= 2;
}

int ft_strcmp(char *s1, char *s2) {
    while (*s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

int get_param_value(int *argc_ptr, char ***argv_ptr, char *param, int def_val) {
    int value;
    int i;
    int argc;
    char **argv;

    value = def_val;
    i = 0;
    argc = *argc_ptr;
    argv = *argv_ptr;
    while (i < argc) {
        if (!(ft_strcmp(param, argv[i]))) {
            value = str_to_int(argv[i + 1]);
            clean_argv(argv_ptr, argc_ptr, i);
            return (value);
        }
        i++;
    }
    return (def_val);
}

int main(int argc, char **argv) {
    int fd;
    int i;
    int retcode;
    int bytes_to_read;
    char *prog_name;

    retcode = 0;
    prog_name = argv[0];
    bytes_to_read = get_param_value(&argc, &argv, "-c", 100);
    if (argc == 1) {
        retcode = display_file(1, bytes_to_read);
        return (retcode);
    }
    i = 0;
    while (i < argc) {
        fd = open(argv[i], O_RDONLY);
        display_file(fd, bytes_to_read);
        i++;
    }
    return (retcode);
}
