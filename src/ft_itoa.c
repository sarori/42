/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapark <sapark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 22:16:53 by sapark            #+#    #+#             */
/*   Updated: 2019/05/16 16:57:02 by sapark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//nb == -2147483648경우

char	*ft_itoa(int n)
{
	char 	*res;
	int	number;
	unsigned int	i;
	unsigned int	size;

	i = 0;
	if (n < 0)
		number = n * -1;
	else
		number = (unsigned int)n;
	size = (unsigned int)ft_digit(number);
	if (!(res = (char *)malloc(sizeof(char) * (size + 1 + ((n < 0) ? 1 : 0)))))
		return (NULL);
	if (n < 0 && (res[i] = '-'))
		size++;
	i = size - 1;
	while (number >= 10)
	{
		res[i] = (char)(number % 10 + '0');
		number = number / 10;
		i--;
	}
	res[i] = (char)(number % 10 + '0');
	res[size] = '\0';
	return (res);
}
