#include <unistd.h>

void	iterator(int nb)
{
	int		div;
	int		sig;
	char	c;

	div = 1000000000;
	sig = 0;
	while (div >= 1)
	{
		c = '0' + nb / div;
		if (nb / div != 0 || (nb / div == 0 && sig == 1))
		{
			write(1, &c, 1);
			sig = 1;
			nb %= div;
		}
		div /= 10;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	iterator(nb);
}

// int main(void) {
//     ft_putnbr(42);
//     write(1, "\n", 1);
//     ft_putnbr(0035);
//     write(1, "\n", 1);
//     ft_putnbr(-76777);
//     write(1, "\n", 1);
//     ft_putnbr(1234567809);
//     write(1, "\n", 1);
// }
