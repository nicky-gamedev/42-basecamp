int	ft_recursive_factorial(int nb)
{
	int	a;

	if (nb < 0)
		return (0);
	a = 1;
	if (nb != 0)
	{
		a = ft_recursive_factorial(nb - 1);
		a *= nb;
	}
	return (a);
}
