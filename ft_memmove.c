/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 10:49:28 by tulenius          #+#    #+#             */
/*   Updated: 2021/11/12 11:38:24 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memmove(void *dest, const void *src, size_t size)
{
	size_t	i;

	if (dest < src)
	{
		i = 0;
		while (i < size)
		{
			((char *)dest)[i] = ((char *)src)[i];
		}
	}
	else
	{
		i = size -1;
		while (i >= 0){
			((char *)dest)[i] = ((char *)src)[i];
			i--;
		}
	}
}
