int	ft_str_is_uppercase(char *str)
{
	int		index;
	int		value;
	char	ch;

	index = 0;
	value = 1;
	while (str[index] && value != 0)
	{
		ch = str[index];
		if ((ch >= 'A' && ch <= 'Z'))
		{
			value = 1;
		}
		else
		{
			value = 0;
		}
		index++;
	}
	return (value);
}
