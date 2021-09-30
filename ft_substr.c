/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 22:18:31 by jyolando          #+#    #+#             */
/*   Updated: 2021/07/07 22:18:31 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	if (start >= ft_strlen(s + 1))
		return (str);
	while (start--)
		s++;
	i = 0;
	while (i < len && *s)
	{
		str[i++] = *(s)++;
	}
	str[i] = '\0';
	return (str);
}
