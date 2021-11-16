/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:23:31 by tulenius          #+#    #+#             */
/*   Updated: 2021/11/16 14:25:59 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*final_str;

	i = 0;
	final_str = (char *)malloc(sizeof(s));
	if (final_str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		final_str[i] = f(i, f(s[i]));
		i++;
	}
	final_str[i] = '\0';
	return (final_str);
}
