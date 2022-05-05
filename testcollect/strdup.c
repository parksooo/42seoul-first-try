#include<stdlib.h>
int	st_len(char *str)
{
	int i = 0;	
	while(str[i])
		i++;
	return(i);
}


char	*ft_strdup(char *str)
{
	int i = 0;
	char *result;
	int len;

	len = st_len(str);
	result = (char *)malloc(sizeof(char *) * (len + 1));
	if(!result)
		return (0);
	while(str[i])
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*#include<stdio.h>
#include<string.h>
int main()
{
	char ex00_src[] = "hell0 my name is park!";
	printf("src : %s\n", ex00_src);
	printf("strdup : %s\n\n", ft_strdup(ex00_src));
	free(ft_strdup(ex00_src));
}*/
