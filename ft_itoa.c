/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 22:50:08 by jyolando          #+#    #+#             */
/*   Updated: 2021/07/08 22:50:08 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


static int ft_abs (int n)
{
	return((n < 0) ? n *= -1 : n);
}

static int ft_numlen(int n, int neg) {
	int size;

	size = 1;
	while (n /= 10)
		size++;

	return (size + neg);
}

char	*ft_itoa(int n)
{
	int nsize;
	char *nchar;
	int neg;

	neg = (n < 0) ? 1 : 0;
	nsize = ft_numlen(n, neg);
	if(nchar = (char *)malloc(nsize))
	{
		if (neg)
			nchar[0] = '-';
		nchar[nsize--] = '\0';
		while (nsize >= neg)
		{
			nchar[nsize--] = ft_abs(n % 10) + '0';
			n /= 10;
		}
	}
	return (nchar);
}
