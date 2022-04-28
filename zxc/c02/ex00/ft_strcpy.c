/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <joushin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:03:17 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/22 21:07:36 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include<stdio.h>
int	main()
{
    printf("ex00\n");
    char ex00_src[] = "hello world!";
	char ex00_dest[20];
    printf("src : %s\n", ex00_src);
	ft_strcpy(ex00_dest, ex00_src);
	printf("ft_strcpy : %s\n\n", ex00_dest);
}*/
