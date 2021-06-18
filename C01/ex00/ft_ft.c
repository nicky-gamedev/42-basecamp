#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
	int n = 4;
	int *aaaaa = &n;

	printf("n: %d, *nbr: %d, n_address: %p\n", n, *aaaaa, aaaaa);
	ft_ft(aaaaa);
	printf("n: %d, *nbr: %d, n_address: %p\n", n, *aaaaa, aaaaa);
}
