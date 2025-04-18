int	ft_sqrt(int nb)
{
	int	mid;

	mid = nb / 2;
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (nb);
	while (mid >= 0)
	{
		if (mid * mid == nb)
			return (mid);
		mid--;
	}
	return (0);
}
