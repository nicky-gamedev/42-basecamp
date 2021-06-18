int	ft_str_is_printable(char *str)
{
	int		index;
	int		value;
	char	ch;

	index = 0;
	value = 1;
	while (str[index] && value != 0)
	{
		ch = str[index];
		if (ch >= 32 && ch <= 127)
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
