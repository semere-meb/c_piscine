#include <unistd.h>

void ft_print_numbers(void) {
    char c = '0';

    while (c <= '9') {
        write(1, &c, 1);
        c++;
    }
}

// test

// int main() {
//     ft_print_numbers();
//
//     return 0;
// }
