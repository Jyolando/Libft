/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 19:14:18 by jyolando          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/10/04 20:03:44 by jyolando         ###   ########.fr       */
=======
/*   Updated: 2021/10/04 16:10:58 by jyolando         ###   ########.fr       */
>>>>>>> 79c0895bb5449a9ada89f62fda0518214603dd10
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
