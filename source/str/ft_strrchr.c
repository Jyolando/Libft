/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 17:23:19 by jyolando          #+#    #+#             */
/*   Updated: 2021/07/08 17:23:19 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		pos;
	char	*str;

	str = (char *)s;
	i = 0;
	pos = -1;
	while (str[i])
	{
		if (str[i++] == c)
			pos = i;
	}
	if (pos != -1)
	{
		while (pos--)
			str++;
		return (--str);
	}
	else
	{
		return (NULL);
	}
}
