int	ft_sqrt(int nb)
{
	int	i;
	int	max;
	int	sqri;

	max = 46341;
	i = 0;
	while (i < max)
	{
		sqri = i * i;
		if (sqri > nb)
			return (0);
		if (sqri == nb)
			return (i);
		i++;
	}
	return (0);
}
