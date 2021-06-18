#include <unistd.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

int	strchardup(char *str, char to_find, int i)
{
	int	j;

	j = i - 1;
	while (j >= 0)
	{
		if (str[j] == to_find)
			return (1);
		j--;
	}
	return (0);
}

int	check_errors_in_base(char *base, int size)
{
	int	index;

	index = 0;
	if (size <= 1)
		return (0);
	while (base[index])
	{
		if (base[index] == '+' || base[index] == '-')
			return (0);
		if (strchardup(base, base[index], index))
			return (0);
		index++;
	}
	return (1);
}

void	ft_putnbr_base_rec(int nbr, char *base, int size)
{
	unsigned int	n;
	char			a;

	if (nbr < 0)
	{
		n = nbr * -1;
		write(1, "-", 1);
	}
	else
		n = nbr;
	if (n >= (unsigned int)size)
		ft_putnbr_base_rec(n / size, base, size);
	a = base[n % size];
	write(1, &a, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (!check_errors_in_base(base, ft_strlen(base)))
		return ;
	ft_putnbr_base_rec(nbr, base, ft_strlen(base));
}
