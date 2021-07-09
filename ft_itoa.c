/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 22:50:08 by jyolando          #+#    #+#             */
/*   Updated: 2021/07/08 22:50:08 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_numsize(int n)
{
	int	size;

	size = 0;
	while (n / 10 != 0)
	{
		size++;
		n /= 10;
	}
	return (size + 1);
}

char	*ft_itoa(int n)
{
	char	*ns;
	size_t	numsize;

	numsize = ft_numsize(n);
	ns = (char *)malloc(ft_numsize(n) + 1);
	if (ns == NULL)
		return (NULL);
	ns[numsize] = 0;
	while (numsize--)
	{
		if (n / 10 >= 0)
		{
			ns[numsize] = (n % 10) + 48;
			n /= 10;
		}
		else
		{
			ns[numsize] = n + 48;
		}
	}
	return (ns);
}
