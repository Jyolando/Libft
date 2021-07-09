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

typedef int bool;

# define TRUE 1
# define FALSE 0
# define NULL (void *)0

void	*ft_memset(void *s, int c, unsigned long n);
unsigned long	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, unsigned long len);

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);

#endif
