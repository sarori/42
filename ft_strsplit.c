/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapark <sapark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 00:46:29 by sapark            #+#    #+#             */
/*   Updated: 2019/05/17 16:59:24 by sapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char			**res;
	unsigned int	i;
	int				j;
	unsigned int	start;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	start = 0;
	if (!(res = (char **)malloc(sizeof(char *) * (ft_sizecount(s, c) + 1))))
		return (NULL);
	while (s[i] && s[i + 1])
	{
		if (s[i] == c && s[i + 1] != c)
			start = i + 1;
		if ((s[i] != c && s[i + 1] == c))
			res[j++] = ft_strsub(s, start, i - start + 1);
		if (i + 2 == ft_strlen(s) && s[i + 1] != c)
			res[j++] = ft_strsub(s, start, i - start + 2);
		i++;
	}
	res[j] = ((void *)0);
	return (res);
}
