/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:22:51 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/05/20 13:19:58 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (*str != '\0')
	{
		cont++;
		str++;
	}
	return (cont);
}

/*
int	main(void)
{
	char* text;
	char* *str;

	text = "42 es la pera limonera!";
	str = &text;
	printf("%d\n", ft_strlen(*str));
	return (0);
}
 */
