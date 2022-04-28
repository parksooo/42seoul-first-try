/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <joushin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 18:26:40 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/25 09:53:21 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
/*#include <stdio.h>
int	main()
{
	printf("------ ex01 ------\n");
	char ex01_str1[] = "Hello my name is Hunpark!";
	char ex01_str2[] = "I love 42";
	char ex01_str3[] = "babambar";
	ft_putstr(ex01_str1);
	printf("\n");
	ft_putstr(ex01_str2);
	printf("\n");
	ft_putstr(ex01_str3);
	printf("\n\n");
}*/
