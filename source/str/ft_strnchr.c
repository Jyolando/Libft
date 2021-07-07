/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 00:51:40 by jyolando          #+#    #+#             */
/*   Updated: 2021/07/08 01:25:26 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnchr(const char *s, size_t count, int c)
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
