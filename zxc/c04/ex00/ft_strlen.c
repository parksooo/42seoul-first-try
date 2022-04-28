/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <joushin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 18:23:01 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/25 09:52:17 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("------ ex00 ------\n");
	char ex00_str1[] = "123456789"; //9
	char ex00_str2[] = "asdgsah"; // 7
	char ex00_str3[] = "abcd;25ni`209n62kl"; // 18
	printf("str1 : %s\n%d\n", ex00_str1, ft_strlen(ex00_str1));
	printf("str2 : %s\n%d\n", ex00_str2, ft_strlen(ex00_str2));
	printf("str3 : %s\n%d\n\n", ex00_str3, ft_strlen(ex00_str3));
}*/
