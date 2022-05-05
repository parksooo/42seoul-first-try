#include<unistd.h>

void	maff_alpha(char alpha)
{
	char c;
	c = alpha;
	if ( alpha  == 'z' + 1 )
		return ;
	if( c % 2 == 0)
		c = c - 32;;
	write(1, &c, 1);
	maff_alpha(alpha + 1);
}

int	main(void)
{
	maff_alpha('a');
	write(1, "\n", 1);
	return (0);
}
