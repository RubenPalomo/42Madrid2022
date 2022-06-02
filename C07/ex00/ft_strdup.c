/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 10:19:49 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/06/01 22:20:46 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	dest = malloc(sizeof(char));
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char *prueba;

	prueba = ft_strdup("Hola hola para ti mi cola.");
	printf("%s\n", prueba);
	return (0);
}
*/
