/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:48:22 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/20 19:50:16 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;
	int	j;

	i = *a / *b;
	j = *a % *b;
	*a = i;
	*b = j;
}
/*#include<stdio.h>
int	main()
{
	printf("ex04\n");
	int ex04_num1 = 30, ex04_num2 = 4;
	printf("num1 = %d, num2 = %d\n", ex04_num1, ex04_num2);
	ft_ultimate_div_mod(&ex04_num1, &ex04_num2);
	printf("div = %d\nmod = %d\n\n", ex04_num1, ex04_num2);
}*/
