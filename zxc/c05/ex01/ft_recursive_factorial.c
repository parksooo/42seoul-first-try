/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <suhpark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:13:44 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/28 13:53:57 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb > 1)
		result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}
/*#include<stdio.h>
int	main()
{
	printf("-------ex01-------\n");
	printf("nb = 0\n%d\n\n", ft_recursive_factorial(0));
	printf("nb = -1\n%d\n\n", ft_recursive_factorial(-1));
	printf("nb = 5\n%d\n\n", ft_recursive_factorial(5));
	printf("nb = 10\n%d\n\n", ft_recursive_factorial(10));
	printf("nb = 20 (overflow)\n%d\n\n", ft_recursive_factorial(20));
}*/
