/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:08:01 by tulenius          #+#    #+#             */
/*   Updated: 2021/11/16 14:22:51 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*final_str;

	i = 0;
	final_str = (char *)malloc(sizeof(s));
	if (final_str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		final_str[i] = f(s[i]);
	}
	final_str[i] = '\0';
	return (final_str);
}
