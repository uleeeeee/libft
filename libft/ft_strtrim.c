/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 20:20:23 by tulenius          #+#    #+#             */
/*   Updated: 2022/01/19 12:47:32 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	skip_whitespaces(char const *str)
{
	size_t	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	return (i);
}

char	*ft_strtrim(char const *str)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str_new;

	if (!str)
		return (NULL);
	k = 0;
	i = skip_whitespaces(str);
	if (str[i] == '\0')
		return (ft_strcpy(ft_memalloc(sizeof(char) * 2), ""));
	j = ft_strlen(str) - 1;
	while (str[j] == ' ' || str[j] == '\n' || str[j] == '\t')
		j--;
	str_new = (char *)malloc(sizeof(char) * (j - i + 2));
	if (str_new == NULL)
		return (NULL);
	while (k < j - i + 1)
	{
		str_new[k] = str[i + k];
		k++;
	}
	str_new[k] = '\0';
	return (str_new);
}
