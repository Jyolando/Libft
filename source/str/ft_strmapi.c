/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 22:08:56 by jyolando          #+#    #+#             */
/*   Updated: 2021/07/09 22:08:56 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	index;

	index = 0;
	str = (char *)malloc(ft_strlen(s));
	if (str == NULL)
		return (NULL);
	while (*s)
	{
		str[index] = f(index, *(s)++);
		index++;
	}
	return (str);
}
