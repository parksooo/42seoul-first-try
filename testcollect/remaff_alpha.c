#include<unistd.h>
void	reverse_alpha(char c)
{
	char i;
	i = c;
	if( c == 'a' - 1)
		return ;
	if(i % 2 == 1)
	{	
		i = i -32;
		write(1, &i, 1);
 	}
	else
		write(1, &i, 1);
	reverse_alpha(c - 1);
}
int	main()
{
	reverse_alpha('z');
	write(1, "\n", 1);
	return (0);
}
