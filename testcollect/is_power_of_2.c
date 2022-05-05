int	powerof(unsigned int n)
{
	if(n == 1)
		return(1);
	if(n % 2 != 0 || n == 0)
		return(0);
	return(powerof(n/2));
}

#include<stdio.h>
#include<stdlib.h>

int 	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%d\n", powerof(atoi(av[1])));
	}
}
