/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:41:53 by enogueir          #+#    #+#             */
/*   Updated: 2024/09/26 18:07:58 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;

	if (!(size == 0 && nmemb > MAX_SIZE / size))
	{
		ptr = malloc(nmemb * size);
		if (!(ptr))
			return (NULL);
		ft_bzero(ptr, nmemb * size);
		return (ptr);
	}
}
/*#include <stdio.h>
int main() {
    int *arr;
    int n = 5;

    arr = (int *)ft_calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }
    printf("Contenido del array después de calloc:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);

    return 0;
} */
