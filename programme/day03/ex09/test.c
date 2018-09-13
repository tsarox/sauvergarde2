#include <stdio.h>

int		main(void)
{

	int tab[] = {2, 4, 3, 1, 2};
	int i1;
	int i2;
	int tmp;
	int	size = 4;

	i1 = 0;
	while (size != 0)
	{
		while (i1 < size)
		{
			i2 = i1 + 1;
			if (tab[i1] > (tab[i2]))
			{
				tmp = tab[i1];
				tab[i1] = tab[i2];
				tab[i2] = tmp;
			}
			i1++;
		}
		i1 = 0;
		size--;
	}
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);
	printf("%d", tab[3]);
	printf("%d", tab[4]);
	return (0);
}


