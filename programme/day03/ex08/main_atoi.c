#include <stdio.h>

int		ft_atoi(char *str);

int		main(void)
{
	char *str = "abc123";
	printf("%d", ft_atoi(str));
	return (0);
}
