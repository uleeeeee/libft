size_t	ft_strlen(char *str)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t j;
	size_t dest_size;

	while (dest[i] != '\0')
		i++;
	if (ft_strlen(dest) > size)
	{
		return (size + ft_strlen(src));
	}

}
