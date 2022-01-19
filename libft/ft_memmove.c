/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 10:49:28 by tulenius          #+#    #+#             */
/*   Updated: 2022/01/19 11:53:08 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	**ft_memmover(void *dest, const void *src, size_t size)
{
	size_t	i;

	i = 0;
	if (dest <= src)
	{
		while (i < size)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		if (size == 0)
			return (dest);
		i = size - 1;
		while (i)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	if (!dest && !src)
		return (NULL);
	return (ft_memmover(dest, src, size));
}
