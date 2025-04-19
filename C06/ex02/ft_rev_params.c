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
	int	index;

	index = count - 1;
	if (count > 1)
	{
		while (index > 0)
		{
			write_ln(args[index]);
			index--;
		}
	}
	return (0);
}
