int	remove_spaces_and_validate(char *src, int size)
{
	int	index;
	int	j;

	index = 0;
	j = index;
	while (index < size)
	{
		if (src[index] >= '1' && src[index] <= '4')
			src[j++] = src[index];
		else if (src[index] != ' ')
			return (0);
		index++;
	}
	src[j] = '\0';
	return (1);
}

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		index++;
	}
	return (index);
}

int	createGrid(char *src, int s1, int s2, int grid[s1][s2])
{
	int	index;
	int	aux;
	int	size;

	size = ft_strlen(src);
	if (size != 31)
		return (0);
	if (remove_spaces_and_validate(src, size))
	{
		index = 0;
		aux = 0;
		while (index < s1)
		{
			aux = 0;
			while (aux < s2)
			{
				grid[index][aux] = *src - 48;
				src++;
				aux++;
			}
			index++;
		}
		return (1);
	}
	return (0);
}
