int ft_iterative_power(int nb, int power) {
    if (power < 0)
        return 0;
    if (power == 0)
        return 1;

    int result = 1;
    while (power > 0) {
        result *= nb;
        power--;
    }
    return result;
}
