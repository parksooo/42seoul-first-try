/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <suhpark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 11:29:26 by suhpark           #+#    #+#             */
/*   Updated: 2022/05/02 21:00:17 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_base(char *str)
{
	int	i;
	int	j;
	int	str_len;

	i = 0;
	j = 0;
	str_len = ft_strlen(str);
	if (str_len <= 1)
		return (0);
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+'
			|| (str[i] >= 9 && str[i] <= 13) || str[i] == 32)
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
	return (i);
}

int	compare_id(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	check_sign(char *str, int *i)
{
	int	j;
	int	positive;

	j = 0;
	positive = 1;
	while ((str[j] >= 9 && str[j] <= 13) || str[j] == ' ')
		j++;
	while (str[j] == '-' || str[j] == '+')
	{
		if (str[j] == '-')
			positive = -positive;
		j++;
	}
	*i = j;
	return (positive);
}

int	ft_atoi_base(char *str, char *base, int base_len)
{
	int	i;
	int	positive;
	int	result;
	int	c;

	i = 0;
	positive = 1;
	result = 0;
	positive = check_sign(str, &i);
	while (str[i])
	{
		c = compare_id(str[i], base);
		if (c == -1)
			break ;
		result = (result * base_len) + c;
		i++;
	}
	return (result * positive);
}
