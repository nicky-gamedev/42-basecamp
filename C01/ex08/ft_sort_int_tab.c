void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	key;

	i = 0;
	j = 0;
	while (i < size)
	{
		key = tab[i];
		j = i - 1;
		while (j >= 0 && tab[j] > key)
		{
			tab[j + 1] = tab[j];
			j -= 1;
		}
		tab[j + 1] = key;
		i++;
	}
}
