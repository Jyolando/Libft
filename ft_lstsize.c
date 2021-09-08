/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:27:46 by jyolando          #+#    #+#             */
/*   Updated: 2021/09/08 12:40:17 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define NULL (void *)0

int ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst->next != NULL)
	{
		count++;
		lst = lst->next;
	}

	return (count);
}
