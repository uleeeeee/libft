/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:02:43 by tulenius          #+#    #+#             */
/*   Updated: 2021/11/16 15:14:52 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*final_str;
	char	tmp_str;

	i = 0;
	final_str = (char *)(malloc((ft_strlen(s1) + (ft_strlen(s2 + 1)))));
	if (final_str == NULL)
		return (NULL);
	ft_strcat(tmp_str, s1);
	ft_strcat(tmp_str, s2);
	final_str = tmp_str;
	return (final_str);
}
