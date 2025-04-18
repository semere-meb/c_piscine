int	is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	ret;
	int	mul;

	ret = 0;
	mul = 1;
	while (is_space(*str))
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			mul *= -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		ret *= 10;
		ret += *str - '0';
		str++;
	}
	return (ret * mul);
}
