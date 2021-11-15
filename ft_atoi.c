/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:38:58 by tulenius          #+#    #+#             */
/*   Updated: 2021/11/15 12:22:00 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	res;
	int	i;
	int multiplier;

	res = 0;
	i = 0;
	multiplier = 1;
	while (str[i] == '\v' || str[i] == '\t' || str[i] == '\f' || \
	str[i] == '\r' || str[i] == '\n' ||str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			multiplier = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10 + str[i] - '0';
		i++;
	}
	return ((int)(res * multiplier));
}
