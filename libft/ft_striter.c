/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:51:54 by tulenius          #+#    #+#             */
/*   Updated: 2022/01/17 16:31:05 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	size_t	i;

	if (s != NULL)
	{
		i = 0;
		while (s[i] != '\0')
		{
			f((char *)s + i);
			i++;
		}
	}
}
