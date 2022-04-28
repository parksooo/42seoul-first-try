/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <joushin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:06:31 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/22 22:01:45 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

/*#include<stdio.h>
int 	main()
{
	printf("ex07\n");
	int ex07_arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int ex07_i;
	
	printf ("before rev = ");
	for (ex07_i = 0; ex07_i<9 ; ex07_i++){
	printf("%d", ex07_arr[ex07_i]);
	}
	printf("\n");
	printf("after rev = ");
	ft_rev_int_tab(ex07_arr, 9);
	for (ex07_i=0; ex07_i<9;  ex07_i++){
		printf("%d", ex07_arr[ex07_i]);
	}
	printf("\n\n");
}*/
