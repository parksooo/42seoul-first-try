/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <suhpark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:12:17 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/28 14:10:27 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power != 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*#include<stdio.h>
int	main()
{
	printf("-------ex02-------\n");
	printf("nb = 2, power = 0\n%d\n\n", ft_iterative_power(2, 0));
	printf("nb = 0, power = 3\n%d\n\n", ft_iterative_power(0, 3));
	printf("nb = 10, power = 0\n%d\n\n", ft_iterative_power(10, 0));
	printf("nb = 10, power = 3\n%d\n\n", ft_iterative_power(10, 3));
	printf("nb = 50, power = -3\n%d\n\n", ft_iterative_power(50, -3));
	printf("nb = -10, power = 5\n%d\n\n", ft_iterative_power(-10, 5));
	printf("nb = 5, power = 6\n%d\n\n", ft_iterative_power(5, 6));
}*/
