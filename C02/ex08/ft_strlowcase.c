char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if ((str[index] >= 'A' && str[index] <= 'Z'))
			str[index] = str[index] + 32;
		index++;
	}
	return (str);
}
