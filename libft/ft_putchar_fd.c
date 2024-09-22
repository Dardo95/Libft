
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}


int	main(void)
{
	int i;
	char num;

	i = 0;
	num = '0';
	while(i < 10)
	{
		ft_putchar_fd(num, 1);
		i++;
		num++;
	}
}
