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

// ft_alnum checks whether the passed character is a number or a letter
int	ft_isalnum(int c);

// ft_isalpha checks whether the passed character is a letter
int	ft_isalpha(int c);

// ft_isascii checks whether the passed character is a character from the ascii table
int	ft_isascii(int c);

// ft_isdigit checks whether the passed character is a digit
int	ft_isdigit(int c);

// ft_isprint checks whether the passed character is a character from the printable section in the ascii table
int	ft_isprint(int c);
int	ft_memcmp(const void *s1, const void *s2, unsigned long n);
int	ft_strncmp(const char *s1, const char *s2, unsigned long n);

char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strnchr(const char *s, unsigned long count, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);

unsigned long	ft_strlcat(char *dst, const char *src, unsigned long size);
unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long size);
unsigned long	ft_strlen(const char *s);

void	ft_bzero(void *s, unsigned long n);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memccpy(void *dest, void *src, int c, unsigned long n);
void	*ft_memchr(const void *s, int c, unsigned long n);
void	*ft_memcpy(void *dest, const void *src, unsigned long n);
void	*ft_memmove(void *dest, const void *src, unsigned long n);
void	*ft_memset(void *s, int c, unsigned long n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);


#endif
