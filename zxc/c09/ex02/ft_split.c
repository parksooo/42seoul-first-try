/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <suhpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 20:33:20 by suhpark           #+#    #+#             */
/*   Updated: 2022/05/02 20:56:00 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_word_cnt(char *str, char *charset)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i])
	{
		if (!is_charset(str[i], charset))
		{
			cnt++;
			while (str[i] && !is_charset(str[i], charset))
				i++;
		}
		i++;
	}
	return (cnt);
}

void	ft_strdup(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	*p;
	char	**answer;
	int		i;

	i = 0;
	answer = (char **)malloc(sizeof(char *) * ft_word_cnt(str, charset) + 1);
	if (!answer)
		return (0);
	while (*str)
	{
		if (!is_charset(*str, charset))
		{
			p = str;
			while (*str && (!is_charset(*str, charset)))
				str++;
			answer[i] = (char *)malloc(sizeof(char *) * (str - p + 1));
			ft_strdup(answer[i], p, str - p);
			i++;
		}
		else
			str++;
	}
	answer[i] = 0;
	return (answer);
}
/*#include<stdio.h>
#include<string.h>
int main()
{	
   	printf("-------ex05-------\n\n");
    char **ex05_split1;
    char **ex05_split2;
    char **ex05_split3;
	char *ex05_str1 = "hello my name is hunpark!";
	char *ex05_str2 = "good@day!cat#dog!vim12!";
	char *ex05_str3 = "i1my2me3mine4you5your6you7yours";
	ex05_split1 = ft_split(ex05_str1, " ");
    ex05_split2 = ft_split(ex05_str2, "@!#");
    ex05_split3 = ft_split(ex05_str3, "1234567");
    printf("---test1---\n");
	for (int j = 0; j < 5; j++)
	{
		printf("%s\n", ex05_split1[j]);
	}
    printf("\n\n");
    printf("---test2---\n");
    for (int j = 0; j < 5; j++)
	{
		printf("%s\n", ex05_split2[j]);
	}
    printf("\n\n");
    printf("---test3---\n");
    for (int j = 0; j < 8; j++)
	{
		printf("%s\n", ex05_split3[j]);
	}
    printf("\n\n");
	free(ex05_split1);
    free(ex05_split3);
    free(ex05_split2);
}*/
