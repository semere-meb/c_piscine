int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str > 31))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
