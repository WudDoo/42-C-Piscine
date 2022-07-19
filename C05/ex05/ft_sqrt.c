/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 13:33:46 by mortins-          #+#    #+#             */
/*   Updated: 2022/07/15 15:22:47 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_sqrt(int nb)
{
	int	a;

	a = 1;
	while (a * a <= nb)
	{
		if (a * a == nb)
			return (a);
		else if (a >= 46341)
			return (0);
		a++;
	}
	return (0);
}
//https://github.com/eduardomosko/fake-moulinnete/blob/main/c05-tests/ex05.c