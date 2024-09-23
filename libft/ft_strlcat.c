/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:32:29 by enogueir          #+#    #+#             */
/*   Updated: 2024/09/23 12:32:33 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	i;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	i = 0;
	if (size > lendst)
	{
		while (*src != '\0' && i + lendst < (size - 1))
		{
			dst[lendst + i] = src[i];
			i++;
		}
		dst[lendst + i] = '\0';
	}
	return (lendst + lensrc);
}
/*
#include <stdio.h>
int main(void)
{
	char src[5] = "hola";
	char dst[10] = "casa";
	ft_strlcat(dst, src, 10);
	printf("%s", dst);
}*/
