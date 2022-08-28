/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <suhpark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 20:36:13 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/17 20:36:14 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char i);

void	linecreate(int X, char elt[3])
{
	char	i;
	int		x;

	x = 1;
	while (x <= X)
	{
		if (x == 1)
			i = elt[0];
		else if (x == X)
			i = elt[2];
		else
			i = elt[1];
		ft_putchar(i);
		x++;
	}
	ft_putchar('\n');
}

void	make_arr(char *arr, char left, char mid, char right)
{
	arr[0] = left;
	arr[1] = mid;
	arr[2] = right;
}

void	rush(int X, int Y)
{
	char	top[3];
	char	mid[3];
	char	bot[3];
	int		y;

	make_arr(top, 'A', 'B', 'C');
	make_arr(mid, 'B', ' ', 'B');
	make_arr(bot, 'C', 'B', 'A');
	y = 1;
	if (X > 0 && Y > 0)
	{
		while (y <= Y)
		{
			if (y == 1)
				linecreate(X, top);
			else if (y == Y)
				linecreate(X, bot);
			else
				linecreate(X, mid);
			y++;
		}
	}
}

int		main(void);
