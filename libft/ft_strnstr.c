/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:18:25 by enogueir          #+#    #+#             */
/*   Updated: 2024/09/24 13:31:07 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *fstr, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (fstr[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == fstr[0])
		{
			j = 0;
			while (fstr[j] != '\0' && big[i + j] == fstr[j] && (i + j) < len)
				j++;
			if (fstr[j] == '\0')
				return (&big[i]);
		}
		i++;
	}
	return (NULL);
}
