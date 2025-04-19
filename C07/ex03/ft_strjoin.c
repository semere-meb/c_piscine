#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	compute_space(int size, char **strs, char *sep)
{
	int	count;
	int	i;
	int	sep_count;

	count = 0;
	i = 0;
	sep_count = ft_strlen(sep);
	while (i < size)
		count += ft_strlen(strs[i++]);
	return (count + ((i - 1) * sep_count) + 1);
}

void	populate(int size, char **strs, char *sep, char *result)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			result[k++] = strs[i][j++];
		l = 0;
		while (i < (size - 1) && sep[l])
			result[k++] = sep[l++];
		i++;
	}
	result[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;

	if (size == 0)
	{
		result = malloc(1);
		if (result)
			result[0] = '\0';
		return (result);
	}
	result = malloc(compute_space(size, strs, sep));
	if (result)
		populate(size, strs, sep, result);
	return (result);
}
