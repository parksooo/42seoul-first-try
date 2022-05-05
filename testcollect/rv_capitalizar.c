void	mini(char *str)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

char	*rev_cap(char *str)
{
	int i = 0;
	
	mini(str);
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			if(str[i+1] == ' ' || str[i +1] == '\t' || str[i+1] == '\0')
				str[i] -=32;
		}
		i++;
	}
	return(str);
}
#include<stdio.h>
int main(int ac, char **av)
{
	if(ac == 2)
		printf("%s\n", rev_cap(av[1]));
	return(0);
}
