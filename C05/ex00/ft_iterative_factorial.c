/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:16:27 by mortins-          #+#    #+#             */
/*   Updated: 2022/07/18 21:18:01 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	res = nb;
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		i = 1;
		while (i < nb)
		{
			res = res * i;
			i++;
		}
	}
	else
		return (0);
	return (res);
}
/* 
#include <stdio.h>

int	main(void)
{
	int n;
	int res;

	n = -5;
	while (n <= 10)
	{
		res = ft_iterative_factorial(n);
		printf("n = %d, n! = %d\n", n, res);
		n++;
	}
	return (0);
} */