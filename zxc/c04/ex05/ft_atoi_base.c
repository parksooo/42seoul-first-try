/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <suhpark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 15:45:44 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/27 14:49:14 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	if (str_len <= 1)
		return (0);
	while (str[i] != '\0')
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
	while (base[i] != '\0')
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

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	positive;
	int	result;
	int	base_len;
	int	c;

	i = 0;
	positive = 1;
	base_len = check_base(base);
	result = 0;
	positive = check_sign(str, &i);
	while (str[i] != '\0')
	{
		c = compare_id(str[i], base);
		if (c == -1)
			break ;
		result = (result * base_len) + c;
		i++;
	}
	return (positive * result);
}
/*#include <stdio.h>
int	main()
{
	printf("------ ex05 ------\n\n");
	char ex05_str1[] = " \n ----15";
	char ex05_str2[] = "   ---+AABCDESSEZ";
	char ex05_str3[] = "   ++136667";
	char ex05_str4[] = "   -----+-+!!@@#..<";
	char ex05_str5[] = "  \n \tatoi12-+123base";

	printf("21\n");
	printf("%d\n\n", ft_atoi_base(ex05_str1, "0123456789abcdef"));

	printf("0\n");
	printf("%d\n\n", ft_atoi_base(ex05_str1, ""));

	printf("-67174\n");
	printf("%d\n\n", ft_atoi_base(ex05_str2, "ABCDES"));

	printf("-1\n");
	printf("%d\n\n", ft_atoi_base(ex05_str2, "ABZ"));

	printf("0\n");
	printf("%d\n\n", ft_atoi_base(ex05_str3, "A-+"));

	printf("12347\n");
	printf("%d\n\n", ft_atoi_base(ex05_str3, "3405816"));

	printf("1126397\n");
	printf("%d\n\n", ft_atoi_base(ex05_str4, "!@#$%^&*()~?><'."));

	printf("27\n");
	printf("%d\n\n", ft_atoi_base(ex05_str5, "atoi"));
}*/
