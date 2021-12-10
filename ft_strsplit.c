/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:22:16 by tulenius          #+#    #+#             */
/*   Updated: 2021/12/09 21:00:34 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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
	result = ft_strncpy(result, s , n);
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
		while(s[i] == c)
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

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int	main()
{
	char **array;
	array = ft_strsplit("*hello*fellow***students*", '*');

	ft_print_result(array[2]);
	return 0;
}

//Prototype char ** ft_strsplit(char const *s, char c);

//Description Allocates (with malloc(3)) and returns an array of “fresh”
//strings (all ending with ’\0’, including the array itself) obtained by spliting s using the character c as a delimiter.

//If the allocation fails the function returns NULL.

//Example: ft_strsplit("*hello*fellow***students*", ’*’) returns the array ["hello", "fellow", "students"].

//Param. #1 The string to split.
//Param. #2 The delimiter character.
//Return value The array of “fresh” strings result of the split.

//Libc functions malloc(3), free(3)
