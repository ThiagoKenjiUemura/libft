/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkenji-u <tkenji-u@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:34:13 by tkenji-u          #+#    #+#             */
/*   Updated: 2025/07/14 12:43:01 by tkenji-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int digit);

int	ft_isdigit(int digit)
{
	if (digit >= 48 && digit <= 57)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int main(void)
{
	char c = 'a';
	char b = '1';

	printf("%d\n", ft_isdigit(c));
	printf("%d\n", ft_isdigit(b));
}
*/