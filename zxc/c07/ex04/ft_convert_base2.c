/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <suhpark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 11:50:13 by suhpark           #+#    #+#             */
/*   Updated: 2022/05/03 12:21:07 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	ft_atoi_base(char *str, char *base, int base_len);
int	ft_check_base(char *str);
int	compare_id(char c, char *base);

int	num_len(long n, int base_len)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n /= base_len;
		len++;
	}
	return (len);
}

char	*ft_itoa_base(int nb, char *base, int base_len)
{
	long	n;
	int		i;
	char	*str;

	n = nb;
	i = num_len(n, base_len);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	str[i--] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		str[i] = base[n % base_len];
		n /= base_len;
		i--;
	}
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*answer;
	int		num;
	int		base_from_len;
	int		base_to_len;

	base_from_len = ft_check_base(base_from);
	base_to_len = ft_check_base(base_to);
	if (base_from_len == 0 || base_to_len == 0)
		return (0);
	num = ft_atoi_base(nbr, base_from, base_from_len);
	if (num == 0)
	{
		answer = (char *)malloc(2);
		answer[0] = base_to[0];
		answer[1] = '\0';
		return (answer);
	}
	answer = ft_itoa_base(num, base_to, base_to_len);
	return (answer);
}
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
		char basefrom[100] = "0123456789";
		char baseto[100] = "0123456789";
		char input[100] = "-2147483648";
		printf("basefrom : %s\nlen : %lu \n input num 
		: %s baseto: %s \n\n\n",basefrom ,strlen(basefrom),input, baseto);
		char *result = ft_convert_base(input, basefrom, baseto);
		printf("result::: %s\n\n\n",result);
}*/
