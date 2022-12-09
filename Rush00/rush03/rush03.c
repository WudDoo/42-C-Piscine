/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 13:03:54 by mortins-          #+#    #+#             */
/*   Updated: 2022/07/02 16:58:01 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush03(int x, int y)
{
	int	c;
	int	l;

	l = 0;
	while (++l <= y && (x > 0 && y > 0))
	{
		c = 0;
		while (++c <= x)
		{
			if (l == 1 || l == y)
			{
				if (c == 1)
					ft_putchar('A');
				else if (c == x)
					ft_putchar('C');
				else
					ft_putchar('B');
			}
			else if (c == 1 || c == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar ('\n');
	}
}
