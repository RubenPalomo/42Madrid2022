/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:20:15 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/05/22 16:39:21 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_count_letters(char *text)
{
	int	i;

	i = 0;
	while (text[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	final_dest;
	unsigned int	size_src;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	final_dest = i;
	size_src = ft_count_letters(src);
	while (i < (final_dest + size_src) && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	text1[500] = "Esto es ";
	char	text2[50] = " ESPARTA!!! wewewewe";
	int		i;

	i = 0;
	ft_strncat(text1, text2, 10);
	while (text1[i] != '\0')
	{
		write(1, &text1[i], 1);
		i++;
	}
	return (0);
}
*/
