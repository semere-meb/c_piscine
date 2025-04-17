int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (*s1 && *s2)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
			i++;
		}
		else
			return (*s1 - *s2);
	}
	return (*s1 - *s2);
}
