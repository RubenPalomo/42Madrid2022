/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:09:22 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/05/22 18:09:48 by rpalomo-         ###   ########.fr       */
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
		dest[i] = '\0';
	return (dest);
}

int	ft_is_a_match(char *text1, char *text2)
{
	int	i;
	int	cont;

	i = 0;
	cont = 0;
	while (text2[i] != '\0')
	{
		if (text1[i] == text2[i])
			cont++;
		i++;
	}
	if (i == cont)
		return (0);
	else
		return (-1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*pointer;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			if (ft_is_a_match(&str[i], &to_find[0]) == 0)
			{
				pointer = &str[i];
				return (pointer);
			}
		}
		i++;
	}
	pointer = NULL;
	return (pointer);
}

/*
int	main(void)
{
	int		i;
	char	text[100] = "Esto es un ejemplo y está para ejemplificar esta cosa.";
	char	to_find[5] = "esta";
	char	*pointer;

	i = 0;
	pointer = ft_strstr(text, to_find);
	if (pointer != NULL)
	{
		ft_strncpy(pointer, "cosa", 4);
	}
	while (text[i] != '\0')
	{
		write(1, &text[i], 1);
		i++;
	}
	return (0);
}
*/
