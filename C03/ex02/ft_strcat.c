char	*ft_strcat(char *dest, char *src)
{
	char	*dest_original;

	dest_original = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*(dest++) = '\0';
	return (dest_original);
}
