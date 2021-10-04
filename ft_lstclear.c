/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 16:18:41 by jyolando          #+#    #+#             */
/*   Updated: 2021/10/04 16:12:04 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*plst;
	t_list	*plst_second;

	plst = *lst;
	plst_second = *lst;
	while (plst)
	{
		plst_second = plst_second->next;
		del(plst->content);
		free(plst);
		plst = plst_second;
	}
	*lst = NULL;
}
