/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:36:39 by mortins-          #+#    #+#             */
/*   Updated: 2022/07/11 18:56:19 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	unsigned char	s1a;
	unsigned char	s2a;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	s1a = (unsigned char)s1[i];
	s2a = (unsigned char)s2[i];
	return (s1a - s2a);
}
// https://github.com/eduardomosko/fake-moulinnete/blob/main/c03-tests/ex00.c