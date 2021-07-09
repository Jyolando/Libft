/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 00:51:40 by jyolando          #+#    #+#             */
/*   Updated: 2021/07/09 23:46:44 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnchr(const char *s, unsigned long count, int c)
{
	char	*str;

	str = (char *)s;
	while (count-- && *str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (NULL);
}
