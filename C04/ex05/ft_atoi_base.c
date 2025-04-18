#include <unistd.h>

int	base_len(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int	is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	base_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	ret;
	int	mul;
	int	len;

	ret = 0;
	mul = 1;
	len = base_len(base);
	while (is_space(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			mul *= -1;
		str++;
	}
	while (base_index(*str, base) >= 0)
	{
		ret *= len;
		ret += base_index(*str, base);
		str++;
	}
	return (ret * mul);
}
