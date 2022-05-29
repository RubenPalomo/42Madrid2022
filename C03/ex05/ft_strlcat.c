/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:11:26 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/05/22 18:17:07 by rpalomo-         ###   ########.fr       */
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

char	*ft_strlcat(char *dest, char *src)
{
	int	i;
	int	j;
	int	final_dest;
	int	size_src;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	final_dest = i - 1;
	size_src = ft_count_letters(src);
	while (i < (final_dest + size_src) - 1)
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
	char	text2[50] = " ESPARTA!!!";
	int		i;

	i = 0;
	ft_strlcat(text1, text2);
	while (text1[i] != '\0')
	{
		write(1, &text1[i], 1);
		i++;
	}
	return (0);
}
*/
