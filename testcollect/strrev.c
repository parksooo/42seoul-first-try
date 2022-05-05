#include<unistd.h>

char *ft_revver(char *str)
{
	int len = 0;
	int i = 0;
	char tmp = 0;
	
	while(str[len])
		len++;
	while(i < len -1)
	{
		tmp = str[i];
		str[i] = str[len - i -1];
		str[len - i - 1] = tmp;
		i++;
	}	
	return(str);
}

#include<stdio.h>
int main(int ac, char **av)
{	
	if( ac == 2)
		printf("%s\n",ft_revver(av[1]));
	write(1, "\n", 1);
	return(0);
}
