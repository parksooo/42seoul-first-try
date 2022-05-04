/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <suhpark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 11:43:47 by suhpark           #+#    #+#             */
/*   Updated: 2022/05/02 16:10:31 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	num_len;
	int	*arr;

	i = 0;
	num_len = (max - min);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc(sizeof(int) * (num_len));
	if (!(arr))
	{
		*range = NULL;
		return (-1);
	}
	while (i < num_len)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (i);
}
/*int main()
{
		printf("\n----------------------ex02----------------------------\n");
		int min = -3;
		int	max = 6;
		int *arr;
		printf("min :%d  max: %d\n\n",min, max);
		int result =ft_ultimate_range(&arr, min, max);
		printf("result:::::: len :%d \n\n\n\n",result);
		if (result <= 0)
		{
			printf("ex02 error check is ok\n");
		}
		else
		{
			for (int i = 0; i < result; i++)
			{
				printf("arr[%d] : %d\n", i,arr[i]);
			}
			free(arr);
		}
}//직접 바꿔서 사용해보세요 다양한 값을 넣어보세요*/
