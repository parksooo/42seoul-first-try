/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <joushin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 20:16:13 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/25 14:43:25 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
#include<stdio.h>
int	main()
{
	printf("ex10\n");
    char ex10_src[] = "hello my name is hunpark!";
	char ex10_dest[50];
    printf("src : %s, size = 5\n", ex10_src);
	printf("ft_strlcpy : %d\n", ft_strlcpy(ex10_dest, ex10_src, 5));
	printf("dest : %s\n\n", ex10_dest);
}
