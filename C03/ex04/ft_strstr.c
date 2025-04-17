char	*ft_strstr(char *str, char *to_find)
{
	char	*to_find_ptr;
	char	*pin;

	to_find_ptr = to_find;
	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			pin = str;
			while (*to_find && (*str == *to_find))
			{
				str++;
				to_find++;
			}
			if (!*to_find)
				return (pin);
			else
			{
				str = pin;
				to_find = to_find_ptr;
			}
		}
		str++;
	}
	return ((char *)0);
}
