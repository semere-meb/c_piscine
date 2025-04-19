#include <unistd.h>

void	write_ln(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	main(int count, char **args)
{
	int	i;

	if (count > 1)
	{
		i = 1;
		while (i < count)
		{
			write_ln(args[i]);
			i++;
		}
	}
	return (0);
}
