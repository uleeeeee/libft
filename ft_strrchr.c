/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:49:12 by tulenius          #+#    #+#             */
/*   Updated: 2021/11/08 16:35:59 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	last_character;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			last_character = &stc[i];
		}
		i++;
	}
	if (last_character != NULL)
		return (last_character);
	else
		return (NULL);
}
