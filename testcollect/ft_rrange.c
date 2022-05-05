#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int	*r;
	int	len;

	len = (end >= start) ? end - start + 1 : start - end + 1;
	if (!(r = (int*)malloc(sizeof(int) * len)))
		return (NULL);
	 while (len--)
		 r[len] = (end >= start) ? start++ : start--;
	return (r);
}
#include<stdio.h>
int main(int ac, char **av)
{
	if( ac == 3)
		printf("%d\n", ft_rrange(atoi(av[1]), atoi(av[2])));
	return(0);
}

:n
