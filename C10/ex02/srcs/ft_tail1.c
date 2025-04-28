#include "ft_tail.h"
#include <fcntl.h>
#include <libgen.h>
#include <stdlib.h>
#include <unistd.h>

int read_file(char *buffer, int fd, int bytes, int *total_read) {
    char temp[4096];
    int bytes_read;
    int i;
    int index;

    bytes_read = 1;
    index = 0;
    while (bytes_read > 0) {
        bytes_read = read(fd, temp, sizeof(temp));
        i = 0;
        while (i < bytes_read) {
            buffer[index] = temp[i++];
            index = (index + 1) % bytes;
            (*total_read)++;
        }
    }
    if (bytes_read < 0)
        return (-1);
    return (index);
}

int display_file(int fd, int bytes) {
    char *buffer;
    int i;
    int index;
    int total_read;

    index = 0;
    buffer = malloc(bytes * sizeof(char));
    if (!buffer)
        return (1);
    index = read_file(buffer, fd, bytes, &total_read);
    if (fd != -1)
        close(fd);
    if (index < 0) {
        free(buffer);
        return (1);
    }
    i = 0;
    if (total_read < bytes)
        bytes = total_read;
    while (i < bytes)
        write(1, &buffer[(index + i++) % bytes], 1);
    free(buffer);
    return (0);
}

int str_to_int(char *str, char ***argv_ptr) {
    char **argv;
    int value;
    int i;

    argv = *argv_ptr;
    value = 0;
    i = 0;
    while (str[i]) {
        if (str[i] >= '0' && str[i] <= '9') {
            value *= 10;
            value += (str[i++] - '0');
        } else {
            print_error(argv[0], ft_replace("invalid number of bytes: %", str),
                        2);
            return (-1);
        }
        str++;
    }
    return (value);
}

void clean_argv(char ***argv_ptr, int *argc_ptr, int index) {
    int i;
    char *temp;
    char **argv;

    i = index;
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
            if (i + 1 == argc) {
                print_error(argv[0],
                            "option requires an argument -- 'c\nTry 'tail "
                            "--help' for more information.",
                            2);
                return (-1);
            }
            value = str_to_int(argv[i + 1], argv_ptr);
            if (value == -1)
                return (-1);
            clean_argv(argv_ptr, argc_ptr, i);
            return (value);
        }
        i++;
    }
    return (def_val);
}
