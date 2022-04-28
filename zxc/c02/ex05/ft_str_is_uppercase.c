/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <joushin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:52:47 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/21 17:55:02 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str [i] == '\0')
		return (1);
	while (str [i] != '\0')
	{	
		if (str [i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*#include<stdio.h>
int	main()
{
	printf("ex05\n");
    char ex05_arr1[] = "asdg";
	char ex05_arr2[] = "ASNLTLKAT";
	char ex05_arr3[] = "51235 ASTNKSKLsdtlna ;kl";
	char ex05_arr4[] = "";
    printf("arr1 : %s\n%d\n", ex05_arr1, ft_str_is_uppercase(ex05_arr1));
    printf("arr2 : %s\n%d\n", ex05_arr2, ft_str_is_uppercase(ex05_arr2));
    printf("arr3 : %s\n%d\n", ex05_arr3, ft_str_is_uppercase(ex05_arr3));
    printf("arr4 : %s\n%d\n\n", ex05_arr4, ft_str_is_uppercase(ex05_arr4));
}*/
