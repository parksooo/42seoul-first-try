/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 13:18:31 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/19 15:51:16 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	num_put(int i, int j, int k)
{
	int	a;
	int	b;
	int	c;

	a = i + '0';
	b = j + '0';
	c = k + '0';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(i == 7 && j == 8 && k == 9))
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < 10)
	{
		j = i + 1;
		while (j < 10)
		{
			k = j + 1;
			while (k < 10)
			{
				num_put (i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
/*int	main()
{
	ft_print_comb();
}*/
