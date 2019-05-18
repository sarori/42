/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sizecount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapark <sapark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 17:17:16 by sapark            #+#    #+#             */
/*   Updated: 2019/05/17 17:30:25 by sapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_sizecount(char const *s, char c)
{
	unsigned int	i;
	int				len;
	char			**res;

	i = 0;
	len = s[0] == c ? 0 : 1;
	while (s[i] && s[i + 1])
	{
		if (s[i] == c && s[i + 1] != c)
			len++;
		i++;
	}
	if (!(res = (char **)malloc((len + 1) * sizeof(char *))))
		return (NULL);
	return (res);
}
