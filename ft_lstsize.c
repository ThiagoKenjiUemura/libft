/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkenji-u <tkenji-u@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 14:39:22 by tkenji-u          #+#    #+#             */
/*   Updated: 2025/07/28 14:44:06 by tkenji-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	lst_len;

	lst_len = 0;
	while (lst != NULL)
	{
		lst_len++;
		lst = lst -> next;
	}
	return (lst_len); 
}
