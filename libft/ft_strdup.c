/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:44:08 by enogueir          #+#    #+#             */
/*   Updated: 2024/09/25 21:41:36 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *str;
	int	len;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s) + 1;
	str = malloc(len * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, len);
	return (str);
}
/*
int	main(void)
{
	char *s = "hola";
	char *str;

	str = ft_strdup(NULL);
	printf("%s", str);
	free(str);
	return(0);
}*/
