/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkenji-u <tkenji-u@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:34:38 by tkenji-u          #+#    #+#             */
/*   Updated: 2025/07/28 13:59:01 by tkenji-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c);
static void		skip_delim(const char **s, char c);
static void		free_split(char **arr, size_t i);
static char		**ft_malloc(char **array, size_t malloc_size);

static size_t	count_words(const char *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static void	skip_delim(const char **s, char c)
{
	while (**s == c && **s)
		(*s)++;
}

static	void	free_split(char **arr, size_t i)
{
	while (i > 0)
	{
		free(arr[--i]);
	}
	free(arr);
}

static char	**ft_malloc(char **array, size_t malloc_size)
{
	array = malloc((malloc_size + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	len;

	arr = NULL;
	arr = ft_malloc(arr, count_words(s, c));
	i = 0;
	while (*s)
	{
		skip_delim(&s, c);
		if (*s)
		{
			len = 0;
			while (s[len] && s[len] != c)
					len++;
			arr[i] = ft_substr(s, 0, len);
			if (!arr[i])
				return (free_split(arr, i), NULL);
			i++;
			s += len;
		}
	}
	arr[i] = NULL;
	return (arr);
}
