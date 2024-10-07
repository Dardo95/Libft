/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <enogueir@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:34:55 by enogueir          #+#    #+#             */
/*   Updated: 2024/10/07 14:23:32 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*int main()
{
    t_list  *node1;
    t_list  *node2;
    t_list  *node3;
    t_list  *head;
    t_list  *last_node;

    node1 = ft_lstnew("nodo 1");
    node2 = ft_lstnew("nodo 2");
    node3 = ft_lstnew("nodo 3");

    node1->next = node2;
    node2->next = node3;
    head = node1; // El primer nodo es el head

    last_node = ft_lstlast(head);
    if (last_node)
        printf("El último nodo es: %s\n", (char *)last_node->content);
    else
        printf("La lista está vacía.\n");

    free(head);

    return 0;
}*/
