/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:13:43 by tulenius          #+#    #+#             */
/*   Updated: 2021/11/24 12:56:57 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t nb)
{
	size_t	i;

	i = 0;
	if (nb == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && i < nb - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
