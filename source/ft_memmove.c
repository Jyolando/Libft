/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 23:48:35 by jyolando          #+#    #+#             */
/*   Updated: 2021/07/04 23:48:35 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ! change

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *pdest;
	char *psrc;

	pdest = (char *)dest;
	psrc = (char *)src;
	while (n-- && *psrc)
	{
		*(pdest)++ = *(psrc)++;
	}
	return (dest);
}
