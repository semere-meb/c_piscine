#include <unistd.h>

void	print(int a)
{
	char	c;

	c = '0' + a / 10;
	if (a < 10)
	{
		write(1, "0", 1);
	}
	else
	{
		write(1, &c, 1);
	}
	c = '0' + a % 10;
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	is_not_first;
	int	a;
	int	b;

	is_not_first = 0;
	a = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			if (is_not_first == 1)
			{
				write(1, ", ", 2);
			}
			is_not_first = 1;
			print(a);
			write(1, " ", 1);
			print(b);
			b++;
		}
		a++;
	}
}

// int main() {
//     ft_print_comb2();
//     return (0);
// }
