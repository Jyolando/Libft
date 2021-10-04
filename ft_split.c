/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 11:44:07 by jyolando          #+#    #+#             */
/*   Updated: 2021/10/04 16:16:55 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	count;
	int		isWord;

	i = 0;
	count = 0;
	isWord = 0;
	while (s[i])
	{
		if (s[i] == c)
			isWord = 0;
		else if (s[i] != c && !isWord)
		{
			count++;
			isWord = 1;
		}
		i++;
	}
	return (count);
}

static char	*split_strdup(char const *s, int start, int end)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(end - start + 1);
	if (!str)
		return (NULL);
	while (start < end)
	{
		str[i++] = s[start++];
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	size_t	current_w;
	int		start;
	int		i;

	i = 0;
	current_w = 0;
	start = -1;
	strings = malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (!strings)
		return (NULL);
	while ((size_t)i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || (size_t)i == ft_strlen(s)) && start >= 0)
		{
			strings[current_w++] = split_strdup(s, start, i);
			start = -1;
		}
		i++;
	}
	strings[current_w] = NULL;
	return (strings);
}
