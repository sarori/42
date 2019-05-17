/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapark <sapark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 00:46:29 by sapark            #+#    #+#             */
/*   Updated: 2019/05/16 23:07:21 by sapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char			**res;
	int				i;
	int				j;
	unsigned int	size;
	unsigned int	start;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	size = ft_sizecount(s, c);
	start = 0;
	if (!(res = (char **)malloc(sizeof(char *) * (size + 1))))
		return (NULL);
	while (size > 0)
	{
		if (s[i] == c && s[i] != c)
			start = i + 1;
		else
			while (s[i++] != c && s[i + 1] == c)
				size--;
		res[j++] = ft_strsub(s, start, i - start);
		i++;
		size--;
	}
	return (res);
}

// static char	**make_array(char const *s, char c)
// {
// 	unsigned int	i;
// 	int				len;
// 	char			**res;

// 	i = 0;
// 	len = s[0] == c ? 0 : 1;
// 	while (s[i] && s[i + 1])
// 	{
// 		if (s[i] == c && s[i + 1] != c)
// 			len++;
// 		i++;
// 	}
// 	if (!(res = (char **)malloc((len + 1) * sizeof(char *))))
// 		return (NULL);
// 	return (res);
// }

// char		**ft_strsplit(char const *s, char c)
// {
// 	unsigned int	i;
// 	int				len;
// 	int				start;
// 	char			**res;

// 	if (!s)
// 		return (NULL);
// 	if (!(res = make_array(s, c)))
// 		return (NULL);
// 	start = 0;
// 	i = 0;
// 	len = 0;
// 	while (s[i] && s[i + 1])
// 	{
// 		if (s[i] == c && s[i + 1] != c)
// 			start = i + 1;
// 		if (s[i] != c && s[i + 1] == c)
// 			res[len++] = ft_strsub(s, start, i - start + 1);
// 		if (i + 2 == ft_strlen(s) && s[i + 1] != c)
// 			res[len++] = ft_strsub(s, start, i - start + 2);
// 		i++;
// 	}
// 	res[len] = ((void *)0);
// 	return (res);
// }
