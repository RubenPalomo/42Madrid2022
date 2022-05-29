/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:22:47 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/05/23 16:20:57 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char	src[38] = "Esto es un texto de prueba muy currado";
	char	dest[38];
	int	final_sentence[8] = {32, 69, 83, 80, 65, 82, 84, 65};
	int	i;

	ft_strncpy(dest, src, 7);
	i = 0;
	while (dest[i] != '\0')
	{
		write(1, &dest[i], 1);
		i++;
		}
	i = 0;
	while (i < 8)
	{
		write(1, &final_sentence[i], 1);
		i++;
	}
	return (0);
}
*/
