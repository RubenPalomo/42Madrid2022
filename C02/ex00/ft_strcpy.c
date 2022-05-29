/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:23:43 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/05/22 16:35:44 by rpalomo-         ###   ########.fr       */
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

/*
int	main(void)
{
	int	i;
	char	src[38] = "Esto es un texto de prueba muy currado";
	char	dest[38];

	ft_strcpy(dest, src);
	i = 0;
	while (dest[i] != '\0')
	{
		write(1, &dest[i], 1);
		i++;
	}
	return (0);
}
*/
