/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <suhpark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:09:06 by suhpark           #+#    #+#             */
/*   Updated: 2022/05/03 17:19:46 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	strslen(char **strs, int size)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			len++;
			j++;
		}
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		len;
	int		i;

	i = 0;
	if (size == 0)
	{
		result = (char *)malloc(1);
		result[0] = '\0';
		return (result);
	}
	len = strslen(strs, size);
	result = (char *)malloc(len + ((size - 1) * ft_strlen(sep)) + 1);
	if (!result)
		return (0);
	i = 0;
	result[0] = '\0';
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}
/*#include<stdio.h>
#include<string.h>
int	main()
{
	 printf("-------ex03-------\n\n");
    char *ex03_arr1;
    char *ex03_arr2;
    char *ex03_arr3;
	char *ex03_str[5];

	ex03_str[0] = "hello";
	ex03_str[1] = "my";
	ex03_str[2] = "name";
	ex03_str[3] = "is";
	ex03_str[4] = "hunpark!";
	ex03_arr1 = ft_strjoin(5, ex03_str, " ");
    ex03_arr2 = ft_strjoin(5, ex03_str, ".");
    ex03_arr3 = ft_strjoin(5, ex03_str, "-");
	printf("%s\n", ex03_arr1);
    printf("%s\n", ex03_arr2);
    printf("%s\n\n", ex03_arr3);
    free(ex03_arr1);
    free(ex03_arr2);
    free(ex03_arr3);
}*/
