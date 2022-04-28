/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <joushin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 18:44:50 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/25 09:55:21 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	positive;
	int	result;

	i = 0;
	positive = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			positive = -positive;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (positive * result);
}

/*#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("------ ex03 ------\n");
	char ex03_str1[] ="\t   ----++000846545ags56";
	char ex03_str2[] = "  	 \t	-+--1165ataat++-156";
	char ex03_str3[] = "214564564512313546";
	printf("str1 : %s\nft_atoi(str1) = %d\n\n", ex03_str1, ft_atoi(ex03_str1));
	printf("str2 : %s\nft_atoi(str2) = %d\n\n", ex03_str2, ft_atoi(ex03_str2));
	printf("str3 : %s\nft_atoi(str3) = %d\n\n", ex03_str3, ft_atoi(ex03_str3));
}*/
