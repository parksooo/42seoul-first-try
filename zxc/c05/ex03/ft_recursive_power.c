/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <suhpark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:15:54 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/28 14:06:22 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*#include<stdio.h>
int	main()
{
	printf("-------ex03-------\n");
	printf("nb = 0, power = 0\n%d\n\n", ft_recursive_power(0, 0));
	printf("nb = 0, power = 3\n%d\n\n", ft_recursive_power(0, 3));
	printf("nb = 10, power = 0\n%d\n\n", ft_recursive_power(10, 0));
	printf("nb = 10, power = 3\n%d\n\n", ft_recursive_power(10, 3));
	printf("nb = 50, power = -3\n%d\n\n", ft_recursive_power(50, -3));
}*/
