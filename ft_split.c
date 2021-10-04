/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: jyolando <jyolando@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 11:44:07 by jyolando          #+#    #+#             */
/*   Updated: 2021/10/04 20:54:28 by jyolando         ###   ########.fr       */
=======
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 11:44:07 by jyolando          #+#    #+#             */
/*   Updated: 2021/10/04 16:16:55 by jyolando         ###   ########.fr       */
>>>>>>> 79c0895bb5449a9ada89f62fda0518214603dd10
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	count;
<<<<<<< HEAD
	int		is_word;

	i = 0;
	count = 0;
	is_word = 0;
	while (s[i])
	{
		if (s[i] == c)
			is_word = 0;
		else if (s[i] != c && !is_word)
		{
			count++;
			is_word = 1;
=======
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
>>>>>>> 79c0895bb5449a9ada89f62fda0518214603dd10
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
<<<<<<< HEAD
	str = (char *)malloc((end - start + 1) * sizeof(char));
=======
	str = (char *)malloc(end - start + 1);
>>>>>>> 79c0895bb5449a9ada89f62fda0518214603dd10
	if (!str)
		return (NULL);
	while (start < end)
	{
		str[i++] = s[start++];
	}
	str[i] = '\0';
	return (str);
}

<<<<<<< HEAD
char	**split_to_strings(char const *s, char c)
{
	char	**strings;
	size_t	curword;
	int		start;
	int		end;

	strings = (char **)malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (!strings)
		return (NULL);
	curword = 0;
	end = 0;
	start = -1;
	while ((size_t)end <= ft_strlen(s))
	{
		if (s[end] != c && start < 0)
			start = end;
		else if ((s[end] == c || (size_t)end == ft_strlen(s)) && start >= 0)
		{
			strings[curword++] = split_strdup(s, start, end);
			start = -1;
		}
		end++;
	}
	strings[curword] = NULL;
	return (strings);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;

	if (!s)
		return (NULL);
	strings = split_to_strings(s, c);
	if (!strings)
		return (NULL);
=======
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
>>>>>>> 79c0895bb5449a9ada89f62fda0518214603dd10
	return (strings);
}
