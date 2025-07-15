/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkenji-u <tkenji-u@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 16:38:09 by tkenji-u          #+#    #+#             */
/*   Updated: 2025/07/15 16:57:27 by tkenji-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c);

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c == '\0')
		return ((char *)&s[i]);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
	const char *frase = "olá gamers!";
	char *result;
	char *result2;

	result = ft_strchr(frase, 'g');
	result2 = ft_strchr(frase, '\0');
	
	printf("Primeiro 'g' encontrado em: \"%s\"\n", result);
	printf("Terminador encontrado em: \"%s\"", result2);
}
*/
