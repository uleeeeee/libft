/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:02:43 by tulenius          #+#    #+#             */
/*   Updated: 2021/12/10 14:53:03 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*final_str;

	final_str = (char *)(malloc((ft_strlen(s1) + (ft_strlen(s2 + 1)))));
	if (final_str == NULL)
		return (NULL);
	ft_strcpy(final_str, s1);
	ft_strcat(final_str, s2);
	return (final_str);
}
