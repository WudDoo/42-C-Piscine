/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:06:22 by mortins-          #+#    #+#             */
/*   Updated: 2022/07/06 18:52:24 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (a > 0 && b > 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*int	main(void)
{
	int	a;
	int	b;
	int	res;
	int	ext;
	int	*div;
	int	*mod;

	a = 12;
	b = 4;
	div = &res;
	mod = &ext;
	ft_div_mod(a, b, div, mod);
}*/

//     move lines below into ft_div_mod to test

/*		printf("%d / %d = ", a, b);
		printf("%d\n%d", *div, *mod);*/