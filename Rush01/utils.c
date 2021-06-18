#include <unistd.h>

int	viewsum(int *cell, int step)
{
	int	i;
	int	max;
	int	view;

	i = 0;
	view = 0;
	max = 0;
	while (i < 4)
	{
		if (*cell > max)
		{
			max = *cell;
			view++;
		}
		cell += step;
		i++;
	}
	return (view);
}

int	get_viewsum(int matrix[4][4], int direction, int position)
{
	if (direction == 0)
		return (viewsum(&matrix[0][position], 4));
	else if (direction == 1)
		return (viewsum(&matrix[3][position], -4));
	else if (direction == 2)
		return (viewsum(&matrix[position][0], 1));
	else if (direction == 3)
		return (viewsum(&matrix[position][3], -1));
	return (0);
}

void	write_matrix(int matrix[4][4])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = matrix[i][j] + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
