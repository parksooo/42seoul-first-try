/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <joushin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 11:26:29 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/25 09:14:25 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
			j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int	main()
{
		char	str[] = "abcdefghijklmnopqrstuvwxyz";
	char	find[] = "fghij";
	char	str1[] = "ABCDEFGHIJKLMNOPQUSTUVWXYZ";
	char	find1[] = "GZ";
	char	str2[] = "ABCDEFGHIJKLMNOPQUSTUVWXYZ";
	char	find2[] = "";
	char	str3[] = "ABCDEFGHIJKLMNOPQUSTUVWXYZ";
	char	find3[] = "Z";
	char	str4[] = "ABCDEFGHIJKLMNOPQUSTUVWXYZ";
	char	find4[] = "A";

	printf("\n");
	printf("[[test normal]]\n");
	printf("str : %s\n to_find : %s\n", str, find);
	printf("com result :  %s\nyour result : %s\n", 
	strstr(str, find), ft_strstr(str, find));
	printf("\n\n");
	printf("\n");
	printf("[[test : no find]]\n");
	printf("str : %s\n to_find : %s\n", str1, find1);
	printf("com result :  %s\nyour result : %s\n", 
	strstr(str1, find1), ft_strstr(str1, find1));
	printf("\n\n");
	printf("\n");
	printf("[[test : empty find]]\n");
	printf("str : %s\n to_find : %s\n", str2, find2);
	printf("com result :  %s\nyour result : %s\n", 
	strstr(str2, find2), ft_strstr(str2, find2));
	printf("\n\n");
	printf("\n");
	printf("[[test : only last word match]]\n");
	printf("str : %s\n to_find : %s\n", str3, find3);
	printf("com result :  %s\nyour result : %s\n", 
	strstr(str3, find3), ft_strstr(str3, find3));
	printf("\n\n");
	printf("\n");
	printf("[[test : only first word match]]\n");
	printf("str : %s\n to_find : %s\n", str4, find4);
	printf("com result :  %s\nyour result : %s\n", 
	strstr(str4, find4), ft_strstr(str4, find4));
	printf("\n\n");
	return (0);
}*/
