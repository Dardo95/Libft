/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryner <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 21:47:58 by ryner             #+#    #+#             */
/*   Updated: 2024/10/06 21:54:06 by ryner            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
int main() {
    char *data = "Hola mundo!";
    t_list *nuevo_nodo = ft_lstnew(data);
    if (nuevo_nodo == NULL) {
        printf("Error al crear el nodo.\n");
        return 1;
    }
    printf("Contenido del nodo: %s\n", (char *)nuevo_nodo->content);
    free(nuevo_nodo);
    return 0; 
}*/
