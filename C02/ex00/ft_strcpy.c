/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:34:23 by mortins-          #+#    #+#             */
/*   Updated: 2022/07/07 17:48:40 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include<stdio.h>
#include<stdlib.h>

int	main(void)
{
	char	*src;
	char	*dest;
	char	*ret;

	src = calloc(11, sizeof(char));
	src = "0123456789";
	dest = calloc(11, sizeof(char));
	ret = ft_strcpy(dest, src);
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("ret: %s\n", ret);
	return (0);
}*/