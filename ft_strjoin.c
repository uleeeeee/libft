/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:02:43 by tulenius          #+#    #+#             */
/*   Updated: 2021/11/17 11:21:50 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*final_str;

	final_str = (char *)(malloc(((ft_strlen(s1)) + (ft_strlen(s2 + 1)))));
	if (final_str == NULL)
		return (NULL);
	ft_strcat(final_str, s1);
	ft_strcat(final_str, s2);
	return (final_str);
}
