#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int ft_strcmp(char *s1, char *s2) {
    while (*s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

int ft_strlen(char *str) {
    int len;

    len = 0;
    while (*str++)
        len++;
    return (len);
}

char *ft_replace(char *templ, char *value) {
    char *str;
    int s;
    int v;
    int t;

    str = malloc((ft_strlen(templ) + ft_strlen(value) + 1) * sizeof(char));
    if (!str)
        return (NULL);
    s = 0;
    v = 0;
    t = 0;
    while (templ[t]) {
        if (templ[s] == '%') {
            str[s++] = '\'';
            while (v < ft_strlen(value))
                str[s++] = value[v++];
            str[s++] = '\'';
            t++;
        } else
            str[s++] = templ[t++];
    }
    return (str);
}

void print_error(char *prog_name, char *msg, int msg_count) {
    write(2, prog_name, ft_strlen(prog_name));
    write(2, ": ", 2);
    write(2, msg, ft_strlen(msg));
    if (msg_count == 3) {
        write(2, ": ", 2);
        write(2, strerror(errno), ft_strlen(strerror(errno)));
    }
    write(2, "\n", 1);
}
