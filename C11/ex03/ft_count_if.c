int ft_count_if(char **tab, int length, int (*f)(char *)) {
    int count = 0;
    int i = 0;

    while (i < length) {
        if (f(tab[i]))
            count++;
        i++;
    }

    return count;
}
