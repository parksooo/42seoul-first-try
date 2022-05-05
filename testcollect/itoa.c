#include<stdlib.h>
int	num_len(int n)
{
	int len = 0;

	if( n < 0)
	{
		n *= -1;
		len ++;
	}
	while(n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	long n;
	int i;
	char *str;

	n = nb;
	i = num_len(n);
	if(!(str = (char *)malloc(i + 1)))
		return (0);
	str[i--] = '\0';
	if ( n == 0)
	{
		str[0] = '0';
		return(str);
	}
	if( n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while( n > 0)
	{
		str[i] = n % 10 + '0';
		n /= 10;
		i--;
	}	
	return(str);



	
	
}
