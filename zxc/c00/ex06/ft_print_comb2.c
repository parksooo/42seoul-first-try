/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 11:23:08 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/20 18:53:33 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_put(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_put (a / 10 + '0');
			ft_put (a % 10 + '0');
			ft_put (' ');
			ft_put (b / 10 + '0');
			ft_put (b % 10 + '0');
			if (!(a == 98))
			{
				ft_put (',');
				ft_put (' ');
			}
			b++;
		}
		a++;
	}
}
/*int main()
{
	ft_print_comb2();
}*/
