/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:49:43 by tulenius          #+#    #+#             */
/*   Updated: 2021/11/10 10:46:18 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	char	*first_char_found;

	i = 0;
	j = 0;
	while (haystack[++i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			first_char_found = &haystack[i];
			while (needle[j] != '\0')
			{
				if (haystack[i] == needle[j])
				{
					i++;
					j++;
				}
			}
		}
	}
	if (needle[j] == '\0')
		return (first_char_found);
	else
		return (NULL);
}
