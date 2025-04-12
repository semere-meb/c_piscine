char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*dest_original;
	unsigned int	i;

	dest_original = dest;
	i = 0;
	while (i < n && *src)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	while (i < n && *dest)
	{
		*dest++ = '\0';
		i++;
	}
	return (dest_original);
}
