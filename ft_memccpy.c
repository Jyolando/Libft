/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 22:58:35 by jyolando          #+#    #+#             */
/*   Updated: 2021/07/04 22:58:35 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, unsigned long n)
{
	char			*pdest;
	char			*psrc;
	unsigned long	i;

	pdest = (char *)dest;
	psrc = (char *)src;
	i = 0;
	while (i < n)
	{
		*pdest++ = *psrc++;
		if (*(pdest - 1) == (unsigned char)c)
			return (dest + i + 1);
		i++;

	}
	return ((void *)0);
}
