#include <unistd.h>

int	power(int a, int b)
{
	int	i;
	int	res;

	i = 0;
	res = a;
	while (b > 1)
	{
		res *= a;
		b--;
	}
	return (res);
}

void	ft_print_combn(int n)
{
}
