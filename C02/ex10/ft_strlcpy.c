/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 17:06:47 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/05/23 16:22:50 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
    unsigned int    size;

	i = 0;
	while (i < n - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (i);
}

/*
int	main(void)
{
	char	src[38] = "Esto es un texto de prueba muy currado";
	char	dest[38];
	int	final_sentence[8] = {32, 69, 83, 80, 65, 82, 84, 65};
	int	i;

	ft_strlcpy(dest, src, 8);
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
