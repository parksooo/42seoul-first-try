/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <suhpark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 03:00:48 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/28 15:09:32 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long long	i;

	i = 0;
	if (nb <= 1)
		return (0);
	i = 2;
	while (i * i <= nb)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}
/*#include<stdio.h>
int	main()
{
	ft_is_prime(13);
	printf("%d", ft_is_prime(13));
	printf("\n");
	ft_is_prime(2147483647);
	printf("%d", ft_is_prime(2147283647));
	printf("\n");
	ft_is_prime(1);
	printf("%d", ft_is_prime(1));
	printf("\n");
	ft_is_prime(0);
	printf("%d", ft_is_prime(0));
	printf("\n");
	ft_is_prime(99);
	printf("%d", ft_is_prime(99));

}*/
