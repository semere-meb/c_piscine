char	*ft_strlowcase(char *str)
{
	char	*str_cpy;

	str_cpy = str;
	while (*str_cpy)
	{
		if (*str_cpy >= 'A' && *str_cpy <= 'Z')
		{
			*str_cpy += ('a' - 'A');
		}
		str_cpy++;
	}
	return (str);
}
