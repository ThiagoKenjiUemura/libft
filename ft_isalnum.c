/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkenji-u <tkenji-u@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:43:24 by tkenji-u          #+#    #+#             */
/*   Updated: 2025/07/15 10:49:15 by tkenji-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(char c);

int	ft_isalnum(char c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
#include <stdio.h>
int main(void)
{
	char a = '1';
	char b = 'a';
	char c = '@';

	printf("%d\n",ft_isalnum(a));
	printf("%d\n",ft_isalnum(b));
	printf("%d\n",ft_isalnum(c));
}
*/