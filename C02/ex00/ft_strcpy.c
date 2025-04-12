char	*ft_strcpy(char *dest, char *src)
{
	char	*dest_original;

	dest_original = dest;
	while (*src)
	{
		*dest++ = *src++;
	}
	return (dest_original);
}
