/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <enogueir@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:13:25 by enogueir          #+#    #+#             */
/*   Updated: 2024/09/28 18:31:54 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

static int	ft_count_num(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		return (10);
	if (n == 0)
		return (1);
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char    *ft_itoa(int n)
{
	char	*str;
	int	len;
	long	nb;

	nb = (long)n;
	len = ft_count_num(n);
	if (n < 0)
		len++;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb >= 10)
	{
		str[len - 1] = ((nb % 10) + '0');
		nb = (nb / 10);
		len --;
	}
	str[len - 1] = ((nb %10) + '0');
	return (str);
}

int main() {
    // Casos de prueba
    int test_cases[] = {
        0,               // Caso 0
        1,               // Caso positivo simple
        -1,              // Caso negativo simple
        42,              // Caso positivo
        -42,             // Caso negativo
        123456,          // Caso positivo grande
        -123456,         // Caso negativo grande
        2147483647,         // Caso de valor máximo de int
        -2147483648          // Caso de valor mínimo de int
    };

    int num_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < num_cases; i++) {
        char *result = ft_itoa(test_cases[i]);
        printf("ft_itoa(%d) = \"%s\"\n", test_cases[i], result);
        free(result);  // Asegúrate de liberar la memoria
    }

    return 0;
}
