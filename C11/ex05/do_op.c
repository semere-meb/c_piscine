#include <unistd.h>

int	do_op(int a, int b, int (*f)(int, int))
{
	return (f(a, b));
}

int	parse_int(char *str)
{
	int	nbr;
	int	sign;

	nbr = 0;
	sign = 1;
	while (*str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		nbr *= 10;
		nbr += (*str - '0');
		str++;
	}
	return (sign * nbr);
}

int	get_op(char *str)
{
	if (str[1] == '\0')
	{
		if (str[0] == '+')
			return (0);
		if (str[0] == '*')
			return (1);
		if (str[0] == '-')
			return (2);
		if (str[0] == '/')
			return (3);
		if (str[0] == '%')
			return (4);
		else
			return (-1);
	}
	else
		return (-1);
}

void	print_nbr(int n)
{
	char	c;

	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		print_nbr(n / 10);
	c = '0' + (n % 10);
	write(1, &c, 1);
}

void	print_str(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	is_valid(char **argv)
{
	if (parse_int(argv[3]) == 0)
	{
		if (argv[2][0] == '/')
			print_str("Stop : division by zero");
		else if (argv[2][0] == '%')
			print_str("Stop : modulo by zero");
		return (0);
	}
	return (1);
}

static inline int	add(int a, int b)
{
	return (a + b);
}
static inline int	multiply(int a, int b)
{
	return (a * b);
}
static inline int	subtract(int a, int b)
{
	return (a - b);
}
static inline int	divide(int a, int b)
{
	return (a / b);
}
static inline int	modulo(int a, int b)
{
	return (a % b);
}

int	main(int argc, char **argv)
{
	int	res;
	int	a;
	int	b;
	int	op;

	int (*ops[5])(int, int) = {add, multiply, subtract, divide, modulo};
	if (argc == 4)
	{
		res = 0;
		a = parse_int(argv[1]);
		b = parse_int(argv[3]);
		op = get_op(argv[2]);
		if (is_valid(argv) && op != -1)
			res = do_op(a, b, ops[op]);
		print_nbr(res);
		write(1, "\n", 1);
	}
}
