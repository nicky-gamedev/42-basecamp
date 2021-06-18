#include <stdio.h>
#include <stdlib.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int *tab;
	int counter;

	tab = calloc(10, sizeof(int));
	counter = 0;
	while (counter < 10)
	{
		tab[counter] = counter;
		counter++;
	}
	counter = 0;
	while (counter < 10)
	{
		printf("%d ", tab[counter]);
		counter++;
	}
	printf("\n");
	ft_rev_int_tab(tab, 10);
	counter = 0;
	while (counter < 10)
	{
		printf("%d ", tab[counter]);
		counter++;
	}
	printf("\n");
	return (0);
}

void	reverse(int *arr, int low, int high)
{
	int	temp;

	if (low < high)
	{
		temp = arr[low];
		arr[low] = arr[high];
		arr[high] = temp;
		reverse(arr, low + 1, high - 1);
	}
}

void	ft_rev_int_tab(int *tab, int size)
{
	reverse(tab, 0, size - 1);
}
