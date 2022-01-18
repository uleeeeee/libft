/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:55:10 by tulenius          #+#    #+#             */
/*   Updated: 2021/12/08 12:22:57 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	absolute_value(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}

int	get_len(int nbr)
{
	size_t	len;

	len = 0;
	if (nbr <= 0)
		++len;
	while (nbr != 0)
	{
		++len;
		nbr = nbr / 10;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	char	*result;
	size_t	len;

	len = get_len(nb);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	if (nb == -2147483648)
		return (ft_strcpy(result, "-2147483648"));
	result[len] = '\0';
	if (nb < 0)
		result[0] = '-';
	else if (nb == 0)
		result[0] = '0';
	while (nb != 0)
	{
		--len;
		result[len] = absolute_value(nb % 10) + '0';
		nb /= 10;
	}
	return (result);
}
