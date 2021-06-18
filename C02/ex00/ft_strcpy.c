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
