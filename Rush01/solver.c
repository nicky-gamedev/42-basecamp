int		get_viewsum(int matrix[4][4], int direction, int position);
void	write_matrix(int matrix[4][4]);

void	solve_start(int rules[3][4][4], int matrix[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			rules[1][i][j] = 0;
			rules[2][i][j] = 0;
			matrix[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	checkMatrix(int rules[4][4], int matrix[4][4])
{
	int	i;
	int	j;
	int	v;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			v = get_viewsum(matrix, i, j);
			if (rules[i][j] == v)
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

int	backtracking(int rules[3][4][4], int matrix[4][4], int row, int col)
{
	int	value;

	if (row == 4)
		return (checkMatrix(rules[0], matrix));
	if (col == 4)
		return (backtracking(rules, matrix, row + 1, 0));
	value = 1;
	while (value < 5)
	{
		if (!rules[1][row][value - 1] && !rules[2][col][value - 1])
		{
			rules[1][row][value - 1] = 1;
			rules[2][col][value - 1] = 1;
			matrix[row][col] = value;
			if (backtracking(rules, matrix, row, col + 1))
				return (1);
			rules[1][row][value - 1] = 0;
			rules[2][col][value - 1] = 0;
		}
		value++;
	}
	return (0);
}

int	solve(int rules[3][4][4], int matrix[4][4])
{
	solve_start(rules, matrix);
	if (backtracking(rules, matrix, 0, 0))
	{
		write_matrix(matrix);
		return (1);
	}
	return (0);
}
