/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkenji-u <tkenji-u@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:23:12 by tkenji-u          #+#    #+#             */
/*   Updated: 2025/07/18 15:45:51 by tkenji-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int alpha)
{
	return ((alpha >= 65 && alpha <= 90) || (alpha >= 97 && alpha <= 122));
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