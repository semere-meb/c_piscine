char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*dest_original;
	unsigned int	i;

	dest_original = dest;
	i = 0;
	while (*dest)
	{
		dest++;
	}
	while (*src && i < nb)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*(dest++) = '\0';
	return (dest_original);
}
