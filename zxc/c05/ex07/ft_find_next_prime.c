/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <suhpark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 03:15:10 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/28 15:10:46 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long long	i;

	i = 0;
	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb / 2)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	long long	i;

	i = 1;
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
	{
		while (ft_is_prime(nb + i) != 1)
		{
			i++;
		}
		return (nb + i);
	}
}
/*#include<stdio.h>
int main()
{
	ft_find_next_prime(44);
	printf("%d", ft_find_next_prime(44));
	printf("\n");
	ft_find_next_prime(0);
	printf("%d", ft_find_next_prime(0));
	printf("\n");
	ft_find_next_prime(23456);
	printf("%d", ft_find_next_prime(23456));
	printf("\n");
}*/
