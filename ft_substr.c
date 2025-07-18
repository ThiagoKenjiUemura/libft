/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkenji-u <tkenji-u@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 15:39:35 by tkenji-u          #+#    #+#             */
/*   Updated: 2025/07/18 17:02:24 by tkenji-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		subs = (char *)malloc(1);
		if (!subs)
			return (NULL);
		subs[0] = '\0';
		return (subs);
	}
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	subs = (char *)malloc(len + 1);
	if (!subs)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}
