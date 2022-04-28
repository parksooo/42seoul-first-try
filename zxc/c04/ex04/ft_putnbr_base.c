/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <joushin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 11:23:28 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/27 14:50:50 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_base(char *str)
{
	int	i;
	int	j;
	int	str_len;

	i = 0;
	str_len = ft_strlen(str);
	if (str[0] == '\0' || str_len == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+' || str[i] <= 32)
			return (0);
		j = i + 1;
		while (j < str_len)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	n;

	n = nbr;
	base_len = ft_strlen(base);
	if (check_base(base) == 1)
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = -n;
		}
		if (n < base_len)
			ft_putchar(base[n]);
		if (n >= base_len)
		{
			ft_putnbr_base(n / base_len, base);
			ft_putnbr_base(n % base_len, base);
		}
	}
}
/*#include<stdio.h>
int main()
{
	printf("------ ex04 ------\n");
	printf("-bmLbpjci\n");
	ft_putnbr_base(-2147483648, "abcdEFGhijkLNmopqrST");
	printf("\n\n");

	printf("*///////\n");
	/*ft_putnbr_base(2147483647, "!@#$%^&*()<>,.?/");
	printf("\n\n");

	printf("-)()()(\n");
	ft_putnbr_base(-42, "()");
	printf("\n\n");

	printf("[SHOULD NOT PRINT]\n");
	ft_putnbr_base(133316, "");
	printf("\n\n");

	printf("[SHOULD NOT PRINT]\n");
	ft_putnbr_base(15361, "aabc!");
	printf("\n\n");

	printf("59483\n");
	ft_putnbr_base(59483, "0123456789");
	printf("\n\n");
}*/
