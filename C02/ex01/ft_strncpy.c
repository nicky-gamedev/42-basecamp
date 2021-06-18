char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	if (n > 0)
	{
		while (src[index] && index < n)
		{
			dest[index] = src[index];
			index++;
		}
		while (index < n)
		{
			dest[index] = '\0';
			index++;
		}
	}	
	return (dest);
}
