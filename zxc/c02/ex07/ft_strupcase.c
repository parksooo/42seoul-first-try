/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <joushin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:07:29 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/21 18:19:44 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if (str [i] >= 97 && str [i] <= 122)
			str[i] = str[i] - 32;
			i++;
	}
	return (str);
}
/*#include<stdio.h>
int	main()
{
	printf("ex07\n");
    char ex07_str[] = "Hello I'm hunpark12!!";
    printf("before str : %s\n", ex07_str);
	printf("after str : %s\n\n", ft_strupcase(ex07_str));
}*/
