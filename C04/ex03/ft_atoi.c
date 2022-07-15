/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:19:24 by mortins-          #+#    #+#             */
/*   Updated: 2022/07/14 18:33:51 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	x;
	int	counter;

	i = 0;
	x = 0;
	counter = 1;
	while (str[i] != '\0')
	{
		while (str[i] == '-' || str[i] == '+'
			|| (str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		{
			if (str[i] == '-')
				counter = -counter;
			i++;
		}
		if (str[i] >= '0' && str[i] <= '9')
		{
			x = (str[i] - '0') + (x * 10);
			if (str[i + 1] == '-' || str[i + 1] == '+'
				|| (str[i + 1] >= 9 && str[i + 1] <= 13) || str[i + 1] == 32)
				return (counter * x);
		}
		else
			return (counter * x);
		i++;
	}
	return (counter * x);
}

/* #include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);

void	ft_atoi_like_test(char *str)
{
	int buff;
	int ft_buff;

	buff = atoi(str);
	ft_buff = ft_atoi(str);
	if (buff != ft_buff)
		printf("> KO, invalid int value returned. expected: %d got: %d\n", 
			buff, ft_buff);
	else
		printf("> OK. result: %d\n", ft_buff);
}

void	ft_atoi_unlike_test(char *str, int expected_result)
{
	int ft_buff;

	ft_buff = ft_atoi(str);
	if (ft_buff != expected_result)
		printf("> KO, invalid int value returned expected: %d got: %d\n", 
			expected_result, ft_buff);
	else
		printf("> OK, result: %d\n", ft_buff);
}

int		main(void)
{
	char *str;

	// quando o comportamento e igual ao de atoi
	str = " \n \t \r \v +1234567asd";
	ft_atoi_like_test(str);
	str = " \n \t\f\r \v -123 4b67asd";
	ft_atoi_like_test(str);
	// quando o comportamento e diferente ao de atoi
	str = " \n \t \r \v --+-+-+-214 7483648asd";
	ft_atoi_unlike_test(str, -214);
	str = " \n \t\f\r \v -++-+-++123 4b67asd";
	ft_atoi_unlike_test(str, -123);
	return (0);
} */