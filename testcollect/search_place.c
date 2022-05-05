#include <unistd.h>

void	ft_search_and_replace(char *str, char find, char replace)
{
	int i = 0;
	while(str[i])
	{	
		if (str[i] == find)
			write(1, &replace, 1);
		else
			write(1, &str[i], 1);
	i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 4 && !argv[2][1] && !argv[3][1])
		ft_search_and_replace(argv[1], argv[2][0], argv[3][0]);
	write(1, "\n", 1);
	return (0);
}
