/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <joushin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 08:42:34 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/22 22:17:01 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	printf("ex01\n");
    char ex01_src[] = "Hello 42seoul";
	char ex01_dest[20];
	printf("src : %s\nn = 5\n", ex01_src);
	ft_strncpy(ex01_dest, ex01_src, 5);
	printf("ft_strncpy : %s\n\n", ex01_dest);
}*/
