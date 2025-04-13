#include <unistd.h>

void print_ascii(char c) {
    char *chars = "0123456789abcdef";

    write(1, "\\", 1);
    write(1, &chars[c / 16], 1);
    write(1, &chars[c % 16], 1);
}

int is_char_non_printable(char str) {
    if (str <= 31) {
        return (1);
    } else {
        return (0);
    }
}

void ft_putstr_non_printable(char *str) {
    while (*str) {
        if (is_char_non_printable(*str)) {
            print_ascii(*str);
        } else {
            write(1, str, 1);
        }
        str++;
    }
}

// int main(void) {
//     ft_putstr_non_printable("Coucou\ntu vas bien ?");
//     return (0);
// }
