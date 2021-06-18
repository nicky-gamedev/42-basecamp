#include <unistd.h>

int	ft_strlen(char *str);
int	createGrid(char *src, int s1, int s2, int grid[s1][s2]);
int	solve(int rules[3][4][4], int matrix[4][4]);

int	main(int argc, char *argv[])
{
	int	rules[3][4][4];
	int	matrix[4][4];

	if (argc == 2)
	{
		if (createGrid(argv[1], 4, 4, rules[0]))
		{
			if (solve(rules, matrix))
			{
				return (1);
			}
		}
	}
	write(1, "Error\n", 6);
	return (0);
}
