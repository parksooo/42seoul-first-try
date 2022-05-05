void	sort_int_tab(int *tab, unsigned int size)
{
	int i = 0;
	int j;
	int mini = 0;
	int tmp = 0;
	
	while(i < size - 1)
	{
		mini = i;
		j = i + 1;
		while(j < size)
		{
			if(tab[mini] > tab[j])
			{
				tmp = tab[j];
				tab[j] = tab[mini];
				tab[mini] = tmp;
			}
			j++;
		}
		i++;
	}
}

#include <stdio.h>
int		main(void)
{
	int tab[] = { -1, 6, 7, 3, -6, 7, 2, 4, 5, 2147483647, -2147483648 };
	unsigned int size = 11;

	sort_int_tab(tab, size);

	unsigned int i = 0;
	while (i < size)
	{
		printf("element %d: %d\n", i, tab[i]);
		i++;
	}
	return 0;
}
