/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <joushin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:33:21 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/21 18:21:30 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if (str [i] >= 65 && str [i] <= 90)
			str [i] = str [i] + 32;
			i++;
	}
	return (str);
}
/*#include<stdio.h>
int	main()
{
	printf("ex08\n");
    char ex08_str[] = "Hello I'm hunpark!!";
    printf("before str : %s\n", ex08_str);
	printf("after str : %s\n\n", ft_strlowcase(ex08_str));
}*/
