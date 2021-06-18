int	ft_is_prime(int nb)
{
	unsigned int	i;

	i = 5;
	if (nb == 2 || nb == 3)
		return (1);
	if (nb <= 1 || nb % 2 == 0 || nb % 3 == 0)
		return (0);
	while (i * i <= (unsigned int)nb)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	if (ft_is_prime(nb))
		return (nb);
	while (nb + i <= 2147483647)
	{
		if (ft_is_prime(nb + i))
			return (nb + i);
		i++;
	}
	return (0);
}
