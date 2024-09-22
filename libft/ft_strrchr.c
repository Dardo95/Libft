
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int lenstr;
	
	lenstr = ft_strlen(s);
	if (c == '\0')
                return (char *)&s[lenstr];
	while (lenstr >= 0)
	{
		if(s[lenstr] == (char)c)
			return (char *)&s[lenstr];
		lenstr--;
	}
	return NULL;
}

#include <stdio.h>
int main(void) {
    char str[] = "hola mundo, que tal llevas el dia";
    char *result = ft_strrchr(str, 'l');

    if (result) {
        if (*result == '\0')
                printf("%s el caracter es el nulo\n", result);
        printf("%s\n", result);
    } else {
        printf("Carácter no encontrado.\n");
    }

    return 0;
}
