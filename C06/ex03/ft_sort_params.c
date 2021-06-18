#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index])
	{	
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	index;
	int	result;

	index = 0;
	while (s1[index] && s2[index] && s1[index] == s2[index])
		index++;
	result = (unsigned char) s1[index] - (unsigned char) s2[index];
	return (result);
}

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

void	ft_sort(char **tab, int size)
{
	char	temp[30];
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size - 1 - i)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				ft_strcpy(temp, tab[j]);
				ft_strcpy(tab[j], tab[j + 1]);
				ft_strcpy(tab[j + 1], temp);
			}
			j++;
		}
		i++;
		j = 0;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	ft_sort(argv, argc);
	i = 0;
	while (i++ < argc - 1)
	{
		ft_putstr(argv[i]);
	}
	return (0);
}
