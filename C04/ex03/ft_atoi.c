int	ft_atoi(char *str)
{
	int	index;
	int	factor;
	int	result;

	index = 0;
	factor = 1;
	result = 0;
	while ((str[index] >= '\t' && str[index] <= '\r') || str[index] == ' ')
		index++;
	while (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			factor *= -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		result = (str[index] - '0') + (result * 10);
		index++;
	}
	return (result * factor);
}
