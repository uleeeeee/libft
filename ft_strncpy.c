/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncppy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:53:48 by tulenius          #+#    #+#             */
/*   Updated: 2021/11/04 13:59:36 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < n)
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
			j++;
		}
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
