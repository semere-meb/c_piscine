#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (max <= min)
		return (NULL);
	range = malloc(max - min + 1);
	if (!range)
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	range[i] = '\0';
	return (range);
}
