/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkenji-u <tkenji-u@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:59:43 by tkenji-u          #+#    #+#             */
/*   Updated: 2025/07/23 18:57:24 by tkenji-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(long n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*res;

	nb = n;
	len = get_len(nb);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	if (nb < 0)
		nb = -nb;
	res[len] = '\0';
	if (n == 0)
	{
		res[0] = '0';
		return (res);
	}
	while (nb)
	{
		res[--len] = nb % 10 + '0';
		nb /= 10;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
