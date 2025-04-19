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
	(void)count;
	write_ln(args[0]);
	return (0);
}
