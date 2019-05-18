/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sizecount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapark <sapark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 17:17:16 by sapark            #+#    #+#             */
/*   Updated: 2019/05/17 17:18:01 by sapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_sizecount(char const *s, char c)
{
	unsigned int	i;
	int				cnt;
	char			**res;

	i = 0;
	if (s[0] != c)
		cnt = 1;
	else
		cnt = 0;
	while (s[i] && s[i + 1])
	{
		if (s[i] == c && s[i + 1] != c)
			cnt++;
		i++;
	}
	if (!(res = (char **)malloc((cnt + 1) * sizeof(char *))))
		return (NULL);
	return (res);
}
