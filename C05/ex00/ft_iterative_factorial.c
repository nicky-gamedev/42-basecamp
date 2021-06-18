int	ft_iterative_factorial(int nb)
{
	int	a;

	if (nb < 0)
		return (0);
	a = 1;
	while (nb > 0)
	{
		a *= nb;
		nb--;
	}
	return (a);
}
