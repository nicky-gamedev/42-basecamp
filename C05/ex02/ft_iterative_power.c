int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power < 0)
		return (0);
	i = 0;
	result = 1;
	if (power >= 1)
	{
		while (i < power)
		{
			result *= nb;
			i++;
		}
	}
	return (result);
}
