char	*ft_strupcase(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if ((str[index] >= 'a' && str[index] <= 'z'))
			str[index] = str[index] - 32;
		index++;
	}
	return (str);
}
