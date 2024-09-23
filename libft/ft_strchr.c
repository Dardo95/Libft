/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:32:15 by enogueir          #+#    #+#             */
/*   Updated: 2024/09/23 12:32:22 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*
#include <stdio.h>
int main(void) {
    char str[] = "hola mundo";
    char *result = ft_strchr(str, 'j');

    if (result) {
        if (*result == '\0')
		printf("%s el caracter es el nulo\n", result);
	printf("%s\n", result);
    } else {
        printf("Carácter no encontrado.\n");
    }

    return 0;
}*/
