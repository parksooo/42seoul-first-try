#include<unistd.h>
void	affa(char *str)
{
	int i = 0;
	if(!*str)
		return ;
	while(str[i])
	{
		if(str[i] == 'a')
		{		
			write(1, "a", 1);
			return ;
		} 
		i++;
	}
}

int	main(int ac, char** av)
{
	if(ac == 2)
	{
		affa(av[1]);
	write(1, "\n", 1);
	}
	return(0);
}
