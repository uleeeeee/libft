/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:35:52 by tulenius          #+#    #+#             */
/*   Updated: 2021/11/19 11:55:15 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	if (ft_strlen(s1) != ft_strlen(s2))
		return (0);
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (0);
		else if (s1[i] < s2[i])
			return (0);
		i++;
	}
	return (1);
}
