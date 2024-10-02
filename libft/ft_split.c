/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <enogueir@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:48:25 by enogueir          #+#    #+#             */
/*   Updated: 2024/10/02 13:03:09 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_string(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			count++;
		else if (s[i] != c && s[i - 1] == c)
			count++;
		i++;
	}
	return (count);
}

static char	*substring_extract(const char *s, int start, int len)
{
	char	*substring;
	int		i;

	i = 0;
	len = len - start;
	substring = ft_calloc(len + 1, sizeof(char));
	if (!substring)
		return (NULL);
	while (i < len)
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}

static char **init_var (char const *s, size_t *i, size_t *j, char c)
{
	char	**array;

	*i = 0;
	*j = 0;
	if (!s)
		return (NULL);
	array = ft_calloc(count_string(s, c) + 1, sizeof(char *));
	if (!array)
		return (NULL);
	return (array);
}

static int	ft_free_clean(char **array, int j)
{
	if (!array[j])
	{
		while (j > 0)
			free(array[--j]);
		free(array);
		return (0);
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;
	size_t	j;
	size_t	start;

	array = init_var(s, &i, &j, c);
	if (!array)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			array[j++] = substring_extract(s, start, i);
			if(!ft_free_clean(array, j - 1))
				return (NULL);
		}
		else
			i++;
	}
	array[j] = NULL;
	return (array);
}

int main(void)
{
    // Prueba de la función ft_split
    char const *str = "Hola! esto es un test";
    char delimiter = ' ';
    
    // Llamada a la función ft_split
    char **result = ft_split(str, delimiter);
    
    // Imprimir resultados
    if (result)
    {
        for (int i = 0; result[i]; i++)
        {
            printf("Substring %d: punt \"%p\" %s\n", i, result[i], result[i]);
            free(result[i]); // Liberar cada subcadena
        }
        free(result); // Liberar el array de subcadenas
    }
    else
    {
        printf("Error al dividir la cadena.\n");
    }

    return 0;
}
