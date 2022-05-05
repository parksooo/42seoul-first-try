#include<unistd.h>
#include<stdio.h>
int	ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	while((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if(str[i] == '-'|| str[i] == '+')
	{
		if(str[i] == '-')
			sign *= -1;
		i++;
	}
	while(str[i] >= 32 && str[i] <= 126)
	{
		result = result * 10 + (str[i] - '0');
		printf("%d\n", result);
		i++;	
	}
	printf("%d\n", result);
	return(sign * result);
}

void	ft_hexprint(int n)
{
	if( n >= 16)
		ft_hexprint(n / 16);
	write(1, &"0123456789abcdef"[n % 16], 1);
}

int 	main(int ac, char **av)
{
	if(ac == 2)
		ft_hexprint(ft_atoi(av[1]));
	write(1, "\n", 1);
	return (0);
}
