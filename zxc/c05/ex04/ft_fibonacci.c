/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <suhpark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 21:12:39 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/26 11:08:47 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	i;

	i = 0;
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
/*#include<stdio.h>
int main()
{
	printf("-------ex04-------\n");
	printf("5\n%d\n\n55\n%d\n\n610\n%d\n\n6765\n%d\n\n", 
	ft_fibonacci(5), ft_fibonacci(10), ft_fibonacci(15), ft_fibonacci(20));

}*/
