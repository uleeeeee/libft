/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:33:38 by tulenius          #+#    #+#             */
/*   Updated: 2021/11/19 11:52:25 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int argument)
{
	if ((argument >= 'a' && argument <= 'z') || (argument >= 'A' \
	&& argument <= 'Z') || (argument >= '0' && argument <= '9'))
		return (1);
	else
		return (0);
}
