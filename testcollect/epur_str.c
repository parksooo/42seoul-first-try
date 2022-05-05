#include<unistd.h>
int is_space(char c)
{
	if(c == ' ' || c == '\t')
		return(1);
	return(0);
}

void epur(char *str)
{
	static int  space = 0;

	if(!*str)
		return ;
	if(is_space(*str))
		space = 1;
	if(!is_space(*str) && space)
		space = write(1, " ", 1) - 1;
	if(!is_space(*str))
		write(1, str, 1);
	epur(str+1);
}

int main(int ac, char **av)
{
	if(ac == 2)
	{
		while(is_space(*(av[1])))
			(av[1])++;
			epur(av[1]);
	}
	write(1, "\n", 1);
	return(0);

}

/*#include<unistd.h>
void epur(char *str)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] == ' ' || str[i] == '\t' || (str[i] >= 9 && str[i] <= 13))
			i++;
		if(str[i] >= 33 && str[i] <= 126 && str[i] && str[i])
		{	
			while(!(str[i] == ' ' || str[i] == '\t' || (str[i] >= 9 && str[i] <= 13)) && str[i] )
			{	
				write(1, &str[i], 1);
				i++;
			} 
			write(1, " ", 1);
		}
		i++;	
	}
}

int	main(int ac, char **av)
{
	if(ac == 2)
	 	epur(av[1]);
	write(1, "\n", 1);
}*/
