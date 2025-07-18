/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkenji-u <tkenji-u@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 14:45:28 by tkenji-u          #+#    #+#             */
/*   Updated: 2025/07/18 15:25:56 by tkenji-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
 unsigned char *ptr;
 size_t n;
 size_t i;

 i = 0;
 n = 0;
if(!s)
	return (NULL);
 while(s[i] != '\0')
	i++;
 ptr = (unsigned char *)malloc(i + 1);
 while(s[n] != '\0')
 {
	ptr[n] = s[n];
	n++;
 }
 ptr[n] = '\0';
 return ((char *)ptr);
}