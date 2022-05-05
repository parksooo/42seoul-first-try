#include <unistd.h>

void	ft_rptchar(char c, int n)
{
	if (n < 0)
		return ;
	write(1, &c, 1);
	ft_rptchar(c, n - 1);
}

void	ft_repeat_alpha(char *str)
{
	int i = 0;
	if (!str[i])
		return ;
	if (str[i] >= 'A' && str[i] <= 'Z')
		ft_rptchar(str[i], str[i] - 65);
	else if (str[i] >= 'a' && str[i] <= 'z')
		ft_rptchar(str[i], str[i] - 97);
	else
		ft_rptchar(str[i], 0);
	ft_repeat_alpha(&str[i + 1]);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_repeat_alpha(argv[1]);
	ft_rptchar('\n', 0);
	return (0);
}

