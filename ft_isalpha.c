/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkenji-u <tkenji-u@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:23:12 by tkenji-u          #+#    #+#             */
/*   Updated: 2025/07/14 12:43:03 by tkenji-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int alpha);

int	ft_isalpha(int alpha)
{
	if (alpha >= 65 && alpha <= 90 || alpha >= 97 && alpha <= 122)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int main(void)
{
	int a = 'A';
	int b = '1';

	printf("%d\n", ft_isalpha(a));
	printf("%d\n", ft_isalpha(b));

}
*/