/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sizecount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapark <sapark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 17:17:16 by sapark            #+#    #+#             */
/*   Updated: 2019/05/16 17:21:23 by sapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_sizecount(char const *s, char c)
{
	unsigned int	len;
	unsigned int	cnt;

	cnt = 0;
	len = ft_strlen(s);
	while (len > 0)
	{
		if (*s == c)
			cnt++;
		len--;
	}
	return (len - cnt);
}
