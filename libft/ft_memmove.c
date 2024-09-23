/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:31:37 by enogueir          #+#    #+#             */
/*   Updated: 2024/09/23 12:31:43 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == NULL && src == NULL)
		return (NULL);
	if (src < dest)
	{
		while (n > 0)
		{
			n--;
			((char *)dest)[n] = ((const char *)src)[n];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((char *)dest)[i] = ((const char *)src)[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
int main() {
    char src[50] = "Hola, mundo!";
    char dest[50] = "buenos dias my Lord";

    printf("Antes de memmove: %s\n", dest);

    ft_memmove(dest, src, 13);

    printf("Después de memmove: %s\n", dest);

    return 0;
}*/
