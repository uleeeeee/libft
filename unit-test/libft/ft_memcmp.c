/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:08:36 by tulenius          #+#    #+#             */
/*   Updated: 2022/01/03 14:07:36 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t					i;
	const unsigned char		*tmp_str1;
	const unsigned char		*tmp_str2;

	if (n == 0)
		return (0);
	i = 0;
	tmp_str1 = str1;
	tmp_str2 = str2;
	while (i < n)
	{
		if (tmp_str1[i] != tmp_str2[i])
			return ((unsigned char)tmp_str1[i] - (unsigned char)tmp_str2[i]);
		i++;
	}
	return (0);
}
