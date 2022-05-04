/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <suhpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 11:02:58 by suhpark           #+#    #+#             */
/*   Updated: 2022/05/03 11:31:54 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{	
	int	i;
	int	num_len;
	int	*arr;

	i = 0;
	num_len = (max - min);
	arr = (int *)malloc(sizeof(int) * (num_len));
	if (!(arr))
		return (0);
	if (min >= max)
		return (0);
	while (i < num_len)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
		printf("\n----------------------ex01----------------------------\n");
		long long	min = 0;
		long long	max = 0;
		int *arr = ft_range(min, max);
		if (!arr)
		{
			printf("can't malloc\n");
			return (0);
		}
		printf("min : %lld\nmax : %lld\n\n\n", min, max);
		for (int i = 0; i < max - min; i++)
		{
			printf("%d\n",arr[i]);
		}
		free(arr);
}//직접 바꿔서 사용해보세요 다양한 값을 넣어보세요*/
