/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapark <sapark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 18:19:03 by sapark            #+#    #+#             */
/*   Updated: 2019/05/15 13:16:42 by sapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strdel(char **as)
{
	char	*res;

	if (!as)
		return ;
	if (!(res = (char *)malloc(sizeof(char *))))
		return ;
	free(res);
	*as = 0;
}
