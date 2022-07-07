/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:23:48 by mortins-          #+#    #+#             */
/*   Updated: 2022/07/06 19:58:32 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>
//#include <stdlib.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmpdiv;
	int	tmpmod;

	tmpdiv = *a / *b;
	tmpmod = *a % *b;
	*a = tmpdiv;
	*b = tmpmod;
}

/*int	main(void)
{
	int	*a;
	int	*b;

	a = calloc(1, sizeof(int));
	b = calloc(1, sizeof(int));
	*a = 7;
	*b = 5;
	printf("a: %p, *a: %d, b: %p, *b: %d\n", a, *a, b, *b);
	ft_ultimate_div_mod(a, b);
	printf("a: %p, *a: %d, b: %p, *b: %d\n", a, *a, b, *b);
}*/
