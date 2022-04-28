/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <joushin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 09:21:11 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/21 17:22:44 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str [i] == '\0')
		return (1);
	while (str [i] != '\0')
	{
		if ((str [i] >= 'a' && str [i] <= 'z')
			|| (str [i] >= 'A' && str [i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*#include<stdio.h>
int	main()
{
	 printf("ex02\n");
    char ex02_arr1[] = "asdg";
	char ex02_arr2[] = " a663dtsljljk at;kzcgk";
	char ex02_arr3[] = "51235 sdtlna ;kl";
	char ex02_arr4[] = "";
	printf("arr1 : %s\n%d\n", ex02_arr1, ft_str_is_alpha(ex02_arr1));
    printf("arr2 : %s\n%d\n", ex02_arr2, ft_str_is_alpha(ex02_arr2));
    printf("arr3 : %s\n%d\n", ex02_arr3, ft_str_is_alpha(ex02_arr3));
    printf("arr4 : %s\n%d\n\n", ex02_arr4, ft_str_is_alpha(ex02_arr4));
}*/
