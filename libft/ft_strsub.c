/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:54:56 by tulenius          #+#    #+#             */
/*   Updated: 2022/01/18 15:04:09 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*final_str;

	i = 0;
	final_str = (char *)malloc(((char)len) + 1);
	if (final_str == NULL || !s || !len)
		return (NULL);
	while (i < len)
	{
		final_str[i] = s[start];
		i++;
		start++;
	}
	final_str[i] = '\0';
	return (final_str);
}
