#include <stdlib.h>

int *ft_map(int *tab, int length, int (*f)(int)) {
    int *res = malloc(length * sizeof(int));

    int i = 0;
    while (i < length) {
        res[i] = f(tab[i]);
        i++;
    }

    return res;
}
