/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapark <sapark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 22:36:49 by sapark            #+#    #+#             */
/*   Updated: 2019/05/16 00:23:09 by sapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*element; //노드 생성

	if (!(element = (t_list *)malloc(sizeof(t_list))))
		return (NULL);

	// If the parameter content is nul, the variable content is initialized to NULL
	// and the variable content_size is initialized to 0 even if the parameter content_size isn’t.
	if (content == NULL)
	{
		element -> content = NULL;
		element -> content_size = 0;
	}
	else
	{
		element -> content = ft_memalloc(content_size);
		element -> content = ft_memcpy(element -> content, content, content_size);
		element -> content_size = content_size;
	}
	element -> next = NULL;
	// The variable next is initialized to NULL.
	return (element);
}
