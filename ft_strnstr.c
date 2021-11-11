/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:46:41 by tulenius          #+#    #+#             */
/*   Updated: 2021/11/10 14:51:33 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	char	*first_char_found;

	i = 0;
	j = 0;
	while (haystack[++i] != '\0' && j <= len)
	{
		if (haystack[i] == needle[j])
		{
			first_char_found = &haystack[i];
			while (needle[++j] != '\0')
			{
				if (haystack[i] == needle[j])
				{
					i++;
				}
			}
		}
	}
	if (needle[j] == '\0')
		return (first_char_found);
	else
		return (NULL);
}
