/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:18:47 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/28 16:55:09 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;
	int	mini;

	i = 0;
	temp = 0;
	mini = 0;
	while (i < size - 1)
	{	
		mini = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[mini] > tab[j])
			{
				temp = tab[j];
				tab[j] = tab[mini];
				tab[mini] = temp;
			}	
			j++;
		}
		i++;
	}	
}
/*#include<stdio.h>
int	main()
{
	int ex08_arr[] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int ex08_i;
	
	printf("ex08\n");
	printf("before sort : ");
	for(ex08_i = 0; ex08_i < 11; ex08_i++)
	{
		printf("%d", ex08_arr[ex08_i]);
		if (ex08_i == 10)
			break ;
		printf(", ");
	}
	printf("\n");
	printf("after sort : ");
	ft_sort_int_tab(ex08_arr, 11);
	for(ex08_i = 0; ex08_i < 11; ex08_i++)
	{
		printf("%d", ex08_arr[ex08_i]);
		if (ex08_i == 10)
			break ;
		printf(", ");
	}
	printf("\n");	
}*/
