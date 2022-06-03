/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:49:57 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/06/02 17:14:34 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

char	*ft_cat_texts(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0')
		i++;
	if (s2 == '\0')
	{
		s1[i] = '\0';
		return (s1);
	}
	j = 0;
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	return (s1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*strings;

	if (size <= 0)
	{
		strings = (char *)malloc(1);
		return (strings);
	}
	strings = malloc(sizeof(char) * (size * 300));
	i = 0;
	if (strings == NULL)
		return (0);
	while (i < size)
	{
		ft_cat_texts(strings, strs[i]);
		if (i < size - 1)
			ft_cat_texts(strings, sep);
		i++;
	}
	ft_cat_texts(strings, "\0");
	return (strings);
}

/*
int	main(void)
{
	char *final_text;
	char *texts[50] = {"Hola ", " qué tal ", "? bien?"};
	char sep[5] = "guapo";

	final_text = ft_strjoin(3, texts, sep);
	printf("%s\n", final_text);
}
*/
