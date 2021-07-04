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

void	*ft_memccpy(void *dest, void *src, int c, size_t n)
{
	char *pdest;
	char *psrc;

	pdest = (char *)dest;
	psrc = (char *)src;

	while (n--)
	{
		if ((*pdest++ = *psrc++) == c)
		{
			return (dest);
		}
	}
	return (0);
}
