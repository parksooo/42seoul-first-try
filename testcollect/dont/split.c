#include<stdlib.h>
# define LEN 1000
# define COUNT 1000
char	**ft_split(char *str)
{
	int i = 0;
	int i2 = 0;
	int i3 = 0;
	char **tab;

	tab = (char **)malloc(LEN * sizeof(char));
	while(str[i] == ' ' || str[i] =='\t' || str[i] == '\n')
		i++;
	while(str[i])
	{
		if(str[i] >= 33)
		{
			i3 = 0;
			tab[i2] = (char *)malloc(COUNT * sizeof(char));
			while(str[i] >= 33)
			{
				tab[i2][i3] = str[i];
				i++;
				i3++;
			}
			tab[i2][i3] = '\0';
			i2++;
		}
		else
			i++;
	}
	tab[i2] = 0;
	return (tab);
}

#include <stdio.h>

int		main(int ac, char **av)
{
 	char **arr;

 	char *phrase = "   Hello,   Flavio\t Wuensche!  ";
 	arr = ft_split(phrase);
 	printf("%s\n", arr[0]);
 	printf("%s\n", arr[1]);
 	printf("%s\n", arr[2]);
 	printf("%s\n", arr[3]);
}
