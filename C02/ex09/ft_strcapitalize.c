void	uppercase(char *str, int index)
{
	if ((str[index] >= 'a' && str[index] <= 'z'))
		str[index] = str[index] - 32;
}

void	lowercase(char *str, int index)
{
	if ((str[index] >= 'A' && str[index] <= 'Z'))
		str[index] = str[index] + 32;
}

int	is_char_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

char	*ft_strcapitalize(char *str)
{
	int		index;
	int		j;

	index = 0;
	while (str[index])
	{
		j = index - 1;
		if (j >= 0 && !is_char_alpha(str[j]))
		{
			uppercase(str, index);
		}
		else if (index == 0)
		{
			uppercase(str, index);
		}
		else
		{
			lowercase(str, index);
		}
		index++;
	}
	return (str);
}
