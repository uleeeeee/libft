/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:23:31 by tulenius          #+#    #+#             */
/*   Updated: 2022/01/15 16:36:50 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*final_str;

	i = 0;
	final_str = (char *)malloc(sizeof(s) + 1);
	if (final_str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		final_str[i] = f(i, s[i]);
		i++;
	}
	final_str[i] = '\0';
	return (final_str);
}
