/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 19:14:18 by jyolando          #+#    #+#             */
/*   Updated: 2021/10/04 16:10:58 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*nlst;

	if (!new)
		return ;
	else if (!*lst)
	{
		*lst = new;
		return ;
	}
	nlst = *lst;
	nlst = ft_lstlast(nlst);
	nlst->next = new;
}
