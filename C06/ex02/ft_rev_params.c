#include <unistd.h>

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		write(1, &str[index], 1);
		index++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc;
	while (i-- > 1)
	{
		ft_putstr(argv[i]);
	}
}
