/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:22:16 by tulenius          #+#    #+#             */
/*   Updated: 2021/12/20 17:58:05 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

static int	count_words(char const *s, char c)
{
	unsigned int	i;
	int				words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			words++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (words);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * n + 1);
	if (result == NULL)
		return (NULL);
	result = ft_strncpy(result, s, n);
	result[n] = '\0';
	return (result);
}

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**array;

	i = 0;
	k = 0;
	array = (char **)malloc(sizeof(char *) * (count_words(s, c)) + 1);
	if (array == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = 0;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			array[k] = ft_strndup(s + j, i - j);
			k++;
		}
	}
	array[k] = NULL;
	return (array);
}
