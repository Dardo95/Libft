/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:17:25 by enogueir          #+#    #+#             */
/*   Updated: 2024/09/21 18:31:45 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n )
	{
		((char *)s)[i] = c;
		i++;
	} 
	return (s);
}
/*
int	main(void)
{
	char	str[] = "hola que tal";
	ft_memset(str, 'Z', 12);
	write(1, str, 12);
}*/
