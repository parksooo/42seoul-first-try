/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <joushin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:31:30 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/22 22:15:55 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	mini(char *str)
{
	int	a;

	a = 0;
	while (str [a] != '\0')
	{
		if (str [a] >= 'A' && str [a] <= 'Z')
			str [a] = str [a] +32;
		a++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	mini(str);
	if (str [i] >= 'a' && str [i] <= 'z')
		str [i] = str [i] - 32;
	i = 1;
	while (str [i] != '\0')
	{
		if (!((str [i -1] >= 'a' && str [i -1] <= 'z')
				|| (str [i -1] >= '0' && str [i -1] <= '9')
				|| (str [i -1] >= 'A' && str [i -1] <= 'Z')))
			if (str [i] >= 'a' && str [i] <= 'z')
				str [i] = str [i] - 32;
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int	main()
{
	printf("ex09\n");
    char ex09_str[] = ")cp3d%6kierm) ?x      
	G`E!QmpD}(Iumnuqfl:0?D+,(X<Fd)A%6jtbwf%}@U`!* 
	3#Vny>/2o5/J0bx|Rrsbgo7e%7uynn9)C*41cd{%|Jje Z0bc+7]-
	Ux*Ujwaede0|S Oi}Kwcg^Jk7i15!Ofgx^Fo?)_Z=
	C-Ukd6#Yj(Q[K|{V}{F4<9;Ne#Vf Lcdg!AwqqbbtxBfkkvkrrw]=.]S#['F'";
    printf("before str : %s\n", ex09_str);
	printf("after str  : %s\n\n", ft_strcapitalize(ex09_str));
}*/
