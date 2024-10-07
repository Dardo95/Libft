/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryner <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 01:27:37 by ryner             #+#    #+#             */
/*   Updated: 2024/10/07 09:53:45 by ryner            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//lst: el puntero al primer nodo de una lista.
//new: el puntero a un nodo que añadir a la lista.
//Añade el nodo ’new’ al final de la lista ’lst’

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastnode;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	lastnode = ft_lstlast(*lst);
	lastnode->next = new;
}
