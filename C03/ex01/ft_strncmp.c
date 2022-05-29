/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:31:09 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/05/24 13:59:29 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n)
		i++;
	if (n == i)
		return (0);
	return (s1[i] - s2[i]);
}

/*
int	main(void)
{
	char	text1[60] = "Esto es un texto de prueba muy original";
	char	text2[60] = "Esto es un texto de prueba muy original pero más largo";

	printf("%d\n", ft_strncmp(text1, text2, 30));
}
*/
