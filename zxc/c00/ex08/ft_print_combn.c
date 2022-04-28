/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 11:52:16 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/21 09:45:01 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_outnbr(int *arr, int n)
{
	int	i;

	i = 0;
	while (i < n -1)
	{
		if (n > 1 && arr[i] >= arr[i +1])
			return ;
		i++;
	}
	i = 0;
	while (i < n)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
	if (arr[0] < 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_searchnbr(int *arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		arr[i] = 0;
		i++;
	}
	while (arr[0] <= 10 - n)
	{
		ft_outnbr (arr, n);
		arr[n - 1]++;
		i = n;
		while (i > 1 && n > 1)
		{
			i--;
			if (arr[i] > 10 - (n - i) && i > 0)
			{
				arr[i - 1]++;
				arr[i] = 0;
			}
			else
				break ;
		}
	}
}

void	ft_print_combn(int n)
{
	int	arr[9];	

	if (n > 0 && n < 10)
		ft_searchnbr(arr, n);
	else
		return ;
}

int	main(void)
{
	ft_print_combn(4);
}
