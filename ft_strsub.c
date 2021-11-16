/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:54:56 by tulenius          #+#    #+#             */
/*   Updated: 2021/11/16 15:02:30 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	str_size;
	char	*final_str;

	i = 0;
	str_size = len - start;
	final_str = (char *)malloc(sizeof(str_size + 1));
	if (final_str == NULL)
		return (NULL);
	while (start < len)
	{
		final_str[i] = s[start];
		i++;
		start++;
	}
	final_str[i] = '\0';
	return (final_str);
}
