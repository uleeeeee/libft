/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:22:16 by tulenius          #+#    #+#             */
/*   Updated: 2021/11/17 12:12:45 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char **ft_strsplit(char const *s, char c)
{
	size_t	i;

	i = 0;

}

Prototype char ** ft_strsplit(char const *s, char c);

Description Allocates (with malloc(3)) and returns an array of “fresh”
strings (all ending with ’\0’, including the array itself) obtained by spliting s using the character c as a delimiter.

If the allocation fails the function returns NULL.

Example: ft_strsplit("*hello*fellow***students*", ’*’) returns the array ["hello", "fellow", "students"].

Param. #1 The string to split.
Param. #2 The delimiter character.
Return value The array of “fresh” strings result of the split.

Libc functions malloc(3), free(3)
