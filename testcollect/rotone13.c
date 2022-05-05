#include <unistd.h>

void	ft_rot_13(char *str)
{
	int i = 0;
	while(str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
			str[i] += 13;
		else if ((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
			str[i] -= 13;
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_rot_13(argv[1]);
	write(1, "\n", 1);
	return (0);
}
