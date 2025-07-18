/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkenji-u <tkenji-u@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:43:31 by tkenji-u          #+#    #+#             */
/*   Updated: 2025/07/16 19:49:03 by tkenji-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  j; 
    size_t  dst_len;
    size_t  src_len;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);

    while (src[j] !='\0' && j < size - 1)
    {
        dst[i + j] = src[j];
        j++;
    }
    return (i + j);
}
