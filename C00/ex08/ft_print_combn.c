#include <unistd.h>

int power(int a, int b) {
    int i = 0;
    int res = a;

    while (b > 1) {
        res *= a;
        b--;
    }

    return res;
}

void ft_print_combn(int n) {}
