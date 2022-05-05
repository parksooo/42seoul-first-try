void	max(int *tab, unsigned int len)
{
	int i = 0;
	int j;
	int max = 0;
	int tmp = 0;
	
	while(i < len -1)
	{
		max = i;
		j = i + 1;
		while(j < len)
		{
			if(tab[max] < tab[j])
			{
				tmp = tab[j];
				tab[j] = tab[max];
				tab[max] = tmp;
			}
			j++;
		}
		i++;
	}
}
#include<stdio.h>
int main(void)
{
	int tab[] = {1, 2, -34, 55, 99};
	int i = 0;
	max(tab, 5);	
	while (i < 5)
		printf("%d\n", tab[i++]);;
	return(0);
}
