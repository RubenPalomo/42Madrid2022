/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:47:56 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/05/23 16:35:33 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
int	main(void)
{
	char	text1[60] = "Esto es un texto de prueba muy original";
	char	text2[60] = "Esto es un texto de prueba muy original pero más largo";

	printf("%d\n", ft_strcmp(text1, text2));
}
*/
