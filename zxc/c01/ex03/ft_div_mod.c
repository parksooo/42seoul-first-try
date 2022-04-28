/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 20:45:44 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/21 08:01:34 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	i;
	int	j;

	i = a / b;
	j = a % b;
	*div = i;
	*mod = j;
}
/*#include<stdio.h>
int	main()
{
	printf("ex03\n");
	int ex03_num1 = 20, ex03_num2 = 3;
	int div, mod;
	printf("num1 = %d, num2 = %d\n", ex03_num1, ex03_num2);
	ft_div_mod(ex03_num1, ex03_num2, &div, &mod);
	printf("div(num1, num2) = %d\nmod(num1, num2) = %d\n\n", div, mod);
}*/
