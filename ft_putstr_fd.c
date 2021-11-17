/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:46:58 by tulenius          #+#    #+#             */
/*   Updated: 2021/11/17 12:49:08 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr_fd(char const *s, int fd)
{
	size_t	i;

	i = 0;
	while (i != '\0')
	{
		ft_putchar_fd(s[i]);
		i++;
	}
}
