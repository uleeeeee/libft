/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:08:36 by tulenius          #+#    #+#             */
/*   Updated: 2021/11/22 14:25:44 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t nb)
{
	size_t	i;
	char	*tmp_str1;
	char	*tmp_str2;

	i = 0;
	tmp_str1 = (char *)str1;
	tmp_str2 = (char *)str2;
	while (tmp_str1[i] == tmp_str2[i] && tmp_str1[i] \
	!= '\0' && tmp_str2[i] != '\0' && i < nb)
		i++;
	return (tmp_str2[i] - tmp_str1[i]);
}
