/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:14:17 by tulenius          #+#    #+#             */
/*   Updated: 2021/11/28 16:23:11 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		new->content = malloc(content_size);
		if (new->content == NULL)
			return (NULL);
		ft_memmove(new->content, content, content_size);
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}

// Description Allocates (with malloc(3)) and returns a “fresh” link.
// The variables content and content_size of the new link
// are initialized by copy of the parameters of the function.

// If the parameter content is nul, the variable content is initialized to
// NULL and the variable content_size is initialized to 0 even
// if the parameter content_size isn’t.

// The variable next is initialized to NULL.

// If the allocation fails, the function returns NULL.

// Param. #1 The content to put in the new link.
// Param. #2 The size of the content of the new link.

// Return value The new link.
// Libc functions malloc(3), free(3)
