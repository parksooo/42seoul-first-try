#include<unistd.h>
void	frist_word(char *str)
{
	int i;
	i = 0;
	while(str[i] == '\t' || str[i] == '\n'|| str[i] == ' ')
		i++;
	while((str[i] >= 33 && str[i] <=126) )
	{
		write(1, &str[i], 1);
		i++;
	}

}
int main(int ac, char **av)
{
	if(ac == 2)
		frist_word(av[1]);
	write(1, "\n", 1);
}
