/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <joushin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 20:04:45 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/24 21:37:28 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	printf("ex03\n");
	char ex03_dest1[50] = "Hi my name is ";
	char ex03_src1[50] = "Hunpark!!";
	char ex03_dest2[50] = "Hi my name is ";
	char ex03_src2[50] = "Hunpark!!";
	char ex03_dest3[50] = "Hi my name is ";
	char ex03_src3[50] = "Hunpark!!";
	char ex03_dest4[50] = "Hi my name is ";
	char ex03_src4[50] = "Hunpark!!";
	printf("dest : %s\nsrc : %s\n", ex03_dest1, ex03_src1);
	printf("strncat, n=5 : %s\nstrncat, n=8 : 
	%s\n", strncat(ex03_dest1,ex03_src1, 5), 
	strncat(ex03_dest2, ex03_src2, 8));
	printf("ft_strncat, n=5 : %s\nft_strncat, n=8 : 
	%s\n\n\n", ft_strncat(ex03_dest3,ex03_src3, 5), 
	ft_strncat(ex03_dest4, ex03_src4, 8));
}*/
