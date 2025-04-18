#include <unistd.h>

int	base_len(char *base)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (k < i)
		{
			if (base[i] == base[k])
				return (0);
			k++;
		}
		k = 0;
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	char	chars[32];
	long	nb;

	nb = nbr;
	i = 0;
	if (base_len(base) < 2)
		return ;
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	while (nb > 0)
	{
		chars[i++] = base[nb % base_len(base)];
		nb /= base_len(base);
	}
	while (--i >= 0)
		write(1, &chars[i], 1);
}
