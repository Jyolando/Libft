/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 21:14:24 by jyolando          #+#    #+#             */
/*   Updated: 2021/07/08 21:14:24 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_words(char const *s, char c)
{
	size_t	count;
	size_t	pos;
	bool	isWord;

	pos = 0;
	count = 0;
	isWord = FALSE;
	while (s[pos])
	{
		if (s[pos] == c)
		{
			isWord = FALSE;
		}
		else if (s[pos] != c && isWord == FALSE)
		{
			count++;
			isWord = TRUE;
		}
		pos++;
	}
	return (count);
}

static size_t	*ft_strlen_st(size_t pos, char const *s, char c)
{
	size_t	*res;
	size_t	size;

	res = (size_t *)malloc(2 * 4);
	size = 0;
	while (s[pos] == c)
		pos++;
	while (s[pos] != c && s[pos])
	{
		size++;
		pos++;
	}
	res[0] = size;
	res[1] = pos;
	return (res);
}

static char	*ft_putchar(size_t pos, char const *s, char *str, char c)
{
	size_t	i;

	i = 0;
	while (s[pos] == c)
		pos++;
	while (s[pos] != c && s[pos])
	{
		str[i++] = s[pos++];
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	count;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	count = ft_words(s, c);
	strs = (char **)malloc(count + 1);
	if (strs == NULL)
		return (NULL);
	while (i < count)
	{
		strs[i] = (char *)malloc(ft_strlen_st(j, s, c)[0]);
		if (strs[i] == NULL)
			return (NULL);
		ft_putchar(j, s, strs[i++], c);
		j = ft_strlen_st(j, s, c)[1];
	}
	strs[i] = NULL;
	return (strs);
}
