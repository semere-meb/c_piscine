char	*ft_strupcase(char *str)
{
	char	*str_cpy;

	str_cpy = str;
	while (*str_cpy)
	{
		if (*str_cpy >= 'a' && *str_cpy <= 'z')
		{
			*str_cpy -= ('a' - 'A');
		}
		str_cpy++;
	}
	return (str);
}
