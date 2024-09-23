/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:48:50 by enogueir          #+#    #+#             */
/*   Updated: 2024/09/23 14:09:49 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1 && s2 && s1[i] == s2[i] && i < n)
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
/*
#include <stdio.h>
int	main(void)
{
	char	s1[] = "hola ";
	char	s2[] = "hola";
	int	result;
	result	= ft_strncmp(s1, s2, 5);
	printf("%i",result);
}*/
