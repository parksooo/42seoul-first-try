/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <joushin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 14:51:31 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/25 16:35:52 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlen(char *str)
{
	unsigned int	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (src_len + size);
	while (src[i] != '\0' && i < size - dest_len - 1)
	{
		dest[i + dest_len] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (src_len + dest_len);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	dest[] = "42dfgd";
	char	src[] = "l33r";

	char	dest2[50] = "abcde";
	char	dest22[50] = "abcde";
	char	src2[] = "1234567890";
	char	dest3[50] = "abcde";
	char	dest33[50] = "abcde";
	char	src3[] = "123";
	char	dest4[20] = "Hello ";
	char	dest44[10] = "Hello ";
	char	src4[0];

	unsigned int	i;
	i = 4;
	printf("\n");
	printf("dest : %s\nsrc : %s\n size : %d\n", dest, src, i);
	printf("com result :  %lu\nyour result : %d\n", 
	strlcat(dest, src, i), ft_strlcat(dest, src, i));
	printf("\n");

	i = 0;
	printf("\n");
	printf("dest : %s\nsrc : %s\n size : %d\n", dest2, src2, i);
	printf("com result :  %lu\nyour result : %d\n", 
	strlcat(dest2, src2, i), ft_strlcat(dest22, src2, i));
	printf("\n");
	
	i = 3;
	printf("\n");
	printf("dest : %s\nsrc : %s\n size : %d\n", dest3, src, i);
	printf("com result :  %lu\nyour result : %d\n", 
	strlcat(dest3, src3, i), ft_strlcat(dest33, src3, i));
	printf("\n");
	
	i = 2;
	printf("\n");
	printf("dest : %s\nsrc : %s\n size : %d\n", dest4, src4, i);
	printf("com result :  %lu\nyour result : %d\n", 
	strlcat(dest4, src4, i), ft_strlcat(dest44, src4, i));
	printf("\n");
	return (0);

}*/
