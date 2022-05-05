#include<unistd.h>
int	main()
{
	write(1, "Hello world!", 12);
	write(1, "\n", 1);
}
