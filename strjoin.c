#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*final_str;

	final_str = (char *)(malloc((ft_strlen(s1) + (ft_strlen(s2 + 1)))));
	if (final_str == NULL)
		return (NULL);
	printf("empty final_str: %s \n", final_str);
	ft_strcpy(final_str, s1);
	// printf("final_str after ft_strcat final,s1 %s \n", final_str);
	ft_strcat(final_str, s2);
	return (final_str);
}

int		main(void)
{
	char	s1[] = "lorem ipsum";
	char	s2[] = "dolor sit amet";
	char	*strjoin;

	strjoin = ft_strjoin(s1, s2);
	printf("%s", strjoin);
	return 0;
}