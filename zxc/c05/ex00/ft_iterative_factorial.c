/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <suhpark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 10:37:31 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/26 10:44:12 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb <= 0)
		return (0);
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}
/*#include<stdio.h>
int main()
{
	printf("-------ex00-------\n");
	printf("nb = 0\n%d\n\n", ft_iterative_factorial(0));
	printf("nb = -1\n%d\n\n", ft_iterative_factorial(-1));
	printf("nb = 5\n%d\n\n", ft_iterative_factorial(5));
	printf("nb = 10\n%d\n\n", ft_iterative_factorial(10));
	printf("nb = 20 (overflow)\n%d\n\n", ft_iterative_factorial(20));
}*/
