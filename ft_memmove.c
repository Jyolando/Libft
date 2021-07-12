/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 17:41:16 by jyolando          #+#    #+#             */
/*   Updated: 2021/07/08 17:41:16 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, unsigned long n)
{
	char	*pdest;
	char	*psrc;

	pdest = (char *)dest;
	psrc = (char *)src;
	if (pdest < psrc)
	{
		while (n--)
			*(pdest)++ = *(psrc)++;
	}
	else
	{
		pdest = pdest + (n - 1);
		psrc = psrc + (n - 1);
		while (n--)
			*(pdest)-- = *(psrc)--;
	}
	return (dest);
}