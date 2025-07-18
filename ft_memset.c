/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkenji-u <tkenji-u@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:12:26 by tkenji-u          #+#    #+#             */
/*   Updated: 2025/07/18 12:03:30 by tkenji-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t buf)
{
	size_t			i;
	unsigned char	*mem;

	mem = (unsigned char *)dest;
	i = 0;
	while (i < buf)
	{
		mem[i] = (unsigned char)c;
		i++;
	}
	return (mem);
}

/*
#include <stdio.h>
int main(void)
{
	unsigned int z = 0;
	unsigned char buffer[10];
	ft_memset(buffer, 0, 10);

	while(z < 10)
	{
		printf("Byte %u: %u\n", z, buffer[z]);
		z++;
	}
}
*/