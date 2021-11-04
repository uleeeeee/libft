/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:42:38 by tulenius          #+#    #+#             */
/*   Updated: 2021/11/04 11:36:36 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i + 1);
}

char	*ft_strdup(const char *str)
{
	char	*str2;
	int		i;

	i = 0;
	if (str == NULL)
		return (NULL);
	str2 = (char *) malloc(sizeof(char) * ft_strlen(str));
	if (str2 == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		str2[i] = str[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}
