/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 19:32:30 by jyolando          #+#    #+#             */
/*   Updated: 2021/07/08 19:32:30 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strlcat(char *dst, const char *src, unsigned long size)
{
	unsigned long	i;

	i = 0;
	while (*(dst)++)
		i++;
	dst--;
	while (*src && size-- > 0)
	{
		*(dst)++ = *(src)++;
		i++;
	}
	*dst = 0;
	return (i);
}
