#include <unistd.h>

void	write_nbr(unsigned int nb)
{
	int		temp;
	long	factor;
	char	output;

	temp = nb;
	factor = 1;
	while (temp)
	{
		temp = temp / 10;
		factor = factor * 10;
	}
	while (factor > 1)
	{
		factor = factor / 10;
		output = (nb / factor) + '0';
		write(1, &output, 1);
		nb = nb % factor;
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	write_nbr((unsigned int)nb);
}
