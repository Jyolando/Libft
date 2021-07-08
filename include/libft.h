/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 13:57:27 by jyolando          #+#    #+#             */
/*   Updated: 2021/07/04 13:57:27 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef unsigned long size_t;
typedef int bool;

# define TRUE 1
# define FALSE 0
# define NULL (void *)0

void	*ft_memset(void *s, int c, size_t n);
size_t	ft_strlen(const char *s);

void	ft_putstr_fd(char *s, int fd);

#endif
