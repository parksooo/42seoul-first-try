/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <suhpark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 19:41:50 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/28 10:39:06 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void	ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] & s2[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **s1, char **s2)
{
	char *tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}
int	main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < argc - 1)
	{	
		i = 1;
		j = i + 1;
		while (j < argc)
		{
			if(ft_strcmp(argv[i], argv[j]) > 0)
				ft_swap(&argv[i], &argv[j]);
			i++;
			j++;
		}
		i++;
	}
	i = 1;
	while(i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
