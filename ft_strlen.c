/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkenji-u <tkenji-u@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:01:12 by tkenji-u          #+#    #+#             */
/*   Updated: 2025/07/18 11:35:37 by tkenji-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (*s)
	{
		s++;
		length++;
	}
	return (length);
}
/*
#include <stdio.h>
int main(int argc, char *argv[])
{
	int i;

	i = 1;
	while (i < argc)
	{
		printf("%d\n", ft_strlen(argv[i]));
		i++;
	}
}
*/