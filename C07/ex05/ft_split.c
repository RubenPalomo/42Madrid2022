/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:46:18 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/06/02 13:42:51 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int	ft_is_a_match(char *text1, char *text2, int n)
{
	int	i;
	int	cont;

	i = 0;
	cont = 0;
	while (text1[n] != '\0' && text2[i] != '\0')
	{
		if (text1[n] == text2[i])
			cont++;
		i++;
		n++;
	}
	if (i == cont)
		return (0);
	else
		return (-1);
}

int	ft_count_splits(char *str, char *charset)
{
	int	i;
	int	cont;

	i = 0;
	cont = 0;
	while (str[i] != '\0')
	{
		if (str[i] == charset[0])
		{
			if (ft_is_a_match(str, charset, i) == 0)
				cont++;
		}
		i++;
	}
	return (cont);
}

int	ft_str_len(char *text)
{
	int	i;

	i = 0;
	while (text[i] != '\0')
		i++;
	return (++i);
}

char	**ft_array_creation(char *str, char *charset)
{
	int		i;
	char	**array;

	i = 0;
	array = malloc(sizeof(char *) * (ft_count_splits(str, charset)));
	while (i <= ft_count_splits(str, charset))
	{
		array[i] = malloc(sizeof(char *) * ft_str_len(str));
		i++;
	}
	return (array);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		k;
	char	**array_str;

	i = -1;
	j = 0;
	k = -1;
	array_str = ft_array_creation(str, charset);
	while (str[++i] != '\0')
	{
		if (str[i] == charset[0] && ft_is_a_match(str, charset, i) == 0
			&& k != -1)
		{
			i += ft_str_len(charset) - 2;
			k = -1;
			j++;
		}
		else if (ft_is_a_match(str, charset, i) != 0)
			array_str[j][++k] = str[i];
	}
	array_str[j][++k] = '\0';
	return (array_str);
}

/*
int	main(void)
{
	int		i;
	char	text[100] = "esto es un ejemplo y me gusta probar cosas y comer croquetas";
	char	split[10] = "y";
	char	**array;

	array = ft_split(text, split);
	i = 0;
	while (i < ft_count_splits(text, split) + 1)
	{
		printf("%s\n", array[i]);
		i++;
	}
}
*/
/*
 Code to show if the array has empty spaces:
 printf("%d %d\n", ft_count_splits(str, charset), j);
 */
