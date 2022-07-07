/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:26:19 by mortins-          #+#    #+#             */
/*   Updated: 2022/07/06 21:05:15 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	tmp;

	a = 0;
	while (a < size / 2)
	{
		tmp = tab[a];
		tab[a] = tab[size - 1 - a];
		tab[size - 1 - a] = tmp;
		a++;
	}
}

/*int	main(void)
{
	int	tab[0] = {};
	int	size = 5;

	ft_rev_int(&tab[0], size);
	printf ("%d", tab[0]);
}*/