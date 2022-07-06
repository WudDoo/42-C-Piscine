/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 18:51:53 by mortins-          #+#    #+#             */
/*   Updated: 2022/07/04 15:23:27 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(int x)
{
	x = x + 48;
	write (1, &x, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(a / 10);
			ft_putchar(a % 10);
			write (1, " ", 1);
			ft_putchar(b / 10);
			ft_putchar(b % 10);
			if (a != 98)
			{
				write (1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
