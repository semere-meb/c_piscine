unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (*dest && i < size)
	{
		dest++;
		i++;
	}
	while (*src && i < size)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (i);
}
