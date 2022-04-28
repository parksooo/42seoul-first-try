/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <suhpark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 23:37:32 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/28 15:03:21 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long	i;

	i = 2;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*#include<stdio.h>
int main()
{
	int i = ft_sqrt(9);
	printf("%d \n", i);
	i = ft_sqrt(5);
	printf("%d \n", i);
	i = ft_sqrt(100);
	printf("%d \n", i);
	i = ft_sqrt(3);
	printf("%d \n", i);
}*/
