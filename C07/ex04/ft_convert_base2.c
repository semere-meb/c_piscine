int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	char_index(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	is_base_valid(char *base)
{
	int	i;
	int	j;
	int	len;

	if (str_len(base) < 2)
		return (0);
	if (char_index('+', base) > -1)
		return (0);
	if (char_index('-', base) > -1)
		return (0);
	i = 0;
	len = str_len(base);
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_nbr_valid(char *nbr, char *base)
{
	int	i;

	i = 0;
	while (nbr[i])
	{
		if (char_index(nbr[i], base) < 0)
			return (0);
		i++;
	}
	return (1);
}
