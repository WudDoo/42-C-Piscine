/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:47:10 by mortins-          #+#    #+#             */
/*   Updated: 2022/07/07 17:53:41 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;

	str1 = calloc(10, sizeof(char));
	str2 = calloc(10, sizeof(char));
	str3 = calloc(10, sizeof(char));
	str4 = calloc(10, sizeof(char));
	str1 = "ABCDEFGHI";
	str2 = "0BCDEFGHI";
	str3 = "ABCDeFGHI";
	str4 = "ABCDEFGH:";
	printf("str1: %s, is_uppercase: %d\n", str1, ft_str_is_uppercase(str1));
	printf("str2: %s, is_uppercase: %d\n", str2, ft_str_is_uppercase(str2));
	printf("str3: %s, is_uppercase: %d\n", str3, ft_str_is_uppercase(str3));
	printf("str4: %s, is_uppercase: %d\n", str4, ft_str_is_uppercase(str4));
	return (0);
}*/