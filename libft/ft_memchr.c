/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:10:16 by enogueir          #+#    #+#             */
/*   Updated: 2024/09/23 17:57:54 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	let;
	size_t			i;

	str = ((unsigned char *) s);
	let = ((unsigned char) c);
	i = 0;
	while (i < n)
	{
		if (str[i] == let)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main() {
    const char str[] = "Hello, world!";
    char *ptr = ft_memchr(str, 'o', sizeof(str));

    if (ptr != NULL) {
        printf("Encontrado en la posición: %ld\n", ptr - str);
    } else {
        printf("No encontrado.\n");
    }

    return 0;
}*/
/*
int main(void)
{
	const char *str = "Hola que tal?";
	char c = 'a';
	size_t n = 14;

	char *result = (char *)ft_memchr(str, c, n);

	if (result)
		write (1, result, 1);
	else
		write(1, "No encontrado", 13);
	return (0);
}*/
