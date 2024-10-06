/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryner <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 21:57:02 by ryner             #+#    #+#             */
/*   Updated: 2024/10/07 01:04:14 by ryner            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int	i;

	if (!lst)
		return (0);
	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}