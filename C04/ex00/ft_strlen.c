/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:40:59 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/05/23 20:29:01 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strlen(char *text)
{
	int	i;

	i = 0;
	while (text[i] != '\0')
		i++;
	return (i);
}

/*
int	main(void)
{
	char	text[500] = "Esto es un texto de prueba muy currado.";
	printf("%d\n", ft_strlen(text));
	return (0);
}
*/
