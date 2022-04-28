/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <suhpark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:31:15 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/28 13:48:54 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<string.h>
#include<stdlib.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}
char	*ft_strdup(char *src)
{
	int i;
	int src_len;
	char	*new_str;
	
	i = 0;
	src_len = ft_strlen(src);
	new_str = (char *)malloc(sizeof(char)* (src_len + 1));
	if(!(new_str))
		return (NULL);
	while(src[i])
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
#include <stdio.h>
int main()
{
	printf("-------ex00-------\n\n");
    char ex00_src[] = "hello my name is hunpark!";
    printf("src : %s\n", ex00_src);
    printf("strdup : %s\n\n", ft_strdup(ex00_src));
    free(ft_strdup(ex00_src));
}
