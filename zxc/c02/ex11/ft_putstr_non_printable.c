/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhpark <joushin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 08:03:07 by suhpark           #+#    #+#             */
/*   Updated: 2022/04/21 21:01:01 by suhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;
	unsigned char	*str2;

	str2 = (unsigned char *)str;
	i = 0;
	while (str2 [i] != '\0')
	{
		if (str2 [i] >= 32 && str2[i] <= 126)
			ft_putchar(str2[i]);
		else
		{	
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str2[i] / 16]);
			ft_putchar("0123456789abcdef"[str2[i] % 16]);
		}
		i++;
	}	
}
/*#include<stdio.h>
int	main()
{
	printf("ex11\n");
    char ex11_str2[] = "Coucou\ntu vas bien ?";
    printf("str2 : %s\n", ex11_str2);
	ft_putstr_non_printable(ex11_str2);
    printf("\n");

	char test[] = {199, 200, 201, 0};
	ft_putstr_non_printable(test);
}*/
