/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <joushin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:36:15 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/24 21:32:30 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
/*#include<stdio.h>
#include <string.h>
int	main()
{
	char s1[] = "abcdefg";
	char s2[] = "abcdefg";
	char s3[] = "abcfffffff";
	char s4[] = "abcggggggg";
	char s5[] = "";
	char s6[] = "123546789";
	char s7[] = "abcdefghijklmnop";
	char s8[] = "abcdef9hijklmnio";

	printf("\n");
	printf("s1 : %s \ns2 : %s\nn : 3\ncom function : 
	%d\nyour function : %d\n", s1, s2, strncmp(s1, s2, 3), ft_strncmp(s1, s2, 3));
	printf("\n");
	printf("s3 : %s \ns4 : %s\nn : 3\ncom function : 
	%d\nyour function : %d\n", s3, s4, strncmp(s3, s4, 3), ft_strncmp(s3, s4, 3));
	printf("\n");
	printf("s5 : %s \ns6 : %s\nn : 5\ncom function : 
	%d\nyour function : %d\n", s5, s6, strncmp(s5, s6, 5), ft_strncmp(s5, s6, 5));
	printf("\n");
	printf("s7 : %s \ns8 : %s\nn : 15\ncom function : 
	%d\nyour function : %d\n", s7, s8, strncmp(s7, s8, 15), ft_strncmp(s7, s8, 15));
	printf("\n");

	return (0);
}*/
