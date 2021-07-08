/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 00:52:35 by jyolando          #+#    #+#             */
/*   Updated: 2021/07/09 01:31:26 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h";
// #include <unistd.h>

// char *ft_putnbr(int n)
// {
// 	char	temp[10];
// 	char	nbr[11];
// 	bool	isneg;
// 	size_t	i;

// 	i = 0;
// 	isneg = FALSE;
// 	if (n < 0)
// 		isneg = TRUE;
// 	while (n / 10 >= 0 || n / 10 < 0)
// 	{
// 		if (n % 10 < 0)
// 			temp[i] = (n % 10) * -1 + 48;
// 		else
// 			temp[i] = (n % 10) + 48;
// 		i++;
// 		n /= 10;
// 	}
// 	if (n < 0)
// 	{
// 		temp[i] = n * -1 + 48;
// 		temp[i + 1] = '-';
// 	}
// 	else
// 	{
// 		temp[i] = n + 48;
// 	}
// 	while (i)
// 	{

// 	}
// }

// void	ft_putnbr_fd(int n, int fd);
// {
// 	char	nbr[11];

// }
