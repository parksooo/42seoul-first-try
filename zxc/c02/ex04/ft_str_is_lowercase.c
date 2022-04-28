/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <joushin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:47:00 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/21 17:53:03 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str [i] == '\0')
		return (1);
	while (str [i] != '\0')
	{
		if (str [i] >= 'a' && str [i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*#include<stdio.h>
int	main()
{
	 printf("ex04\n");
    char ex04_arr1[] = "asdg";
	char ex04_arr2[] = "atsljljkSDTNL";
	char ex04_arr3[] = "51235 sdtlna ;kl";
	char ex04_arr4[] = "";
    printf("arr1 : %s\n%d\n", ex04_arr1, ft_str_is_lowercase(ex04_arr1));
    printf("arr2 : %s\n%d\n", ex04_arr2, ft_str_is_lowercase(ex04_arr2));
    printf("arr3 : %s\n%d\n", ex04_arr3, ft_str_is_lowercase(ex04_arr3));
    printf("arr4 : %s\n%d\n\n", ex04_arr4, ft_str_is_lowercase(ex04_arr4));
}*/
