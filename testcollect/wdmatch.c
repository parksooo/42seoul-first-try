#include <unistd.h>

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
	{	
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return (i);
}

int     exists(char c, char *str, int i)
{
	int j = 0;
	while(str[i])
	{
		if (str[i] == c)
			j++;
		i++;
    	}
	return(j);
}
char       ft_wdmatch(char *s1, char *s2)
{
	int len = 0;
	len = ft_strlen(s1);
	int i = 0;
	if(s1 == 0)  
		return(0);
	while(s1[i])
	{
		if(exists(s1[i], s2, len) == -1)
			return(0);
		i++;	
	}  
	return(*s1);
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        if (ft_wdmatch(av[1], av[2]))
            ft_putstr(av[1]);
    }
    write(1, "\n", 1);
    return (0);
}
