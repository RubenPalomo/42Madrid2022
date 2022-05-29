/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 16:53:29 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/05/25 18:40:27 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_plusminus_and_spaces(char c)
{
	if (c == '+' || c == '-')
		return (0);
	else if (c == '\n' || c == '\t' || c == '\v' || c == '\f' || c == '\v')
		return (0);
	else if (c == ' ' || c == '0')
		return (0);
	else
		return (-1);
}

int	ft_pow(int num, int pow)
{
	int	i;
	int	result;

	i = 0;
	result = num;
	if (pow == 0)
		return (1);
	else if (pow == 1)
		return (num);
	while (i < pow - 1)
	{
		result *= num;
		i++;
	}
	return (result);
}

int	ft_convert_text_to_int(char *text)
{
	int	i;
	int	size;
	int	number;

	i = 0;
	size = 0;
	number = 0;
	while (text[size] != '\0')
		size++;
	if (size == 1)
		return ((int)text[0] - 48);
	while (text[i] != '\0')
	{
		number += (text[i] - 48) * ft_pow(10, --size);
		i++;
	}
	return (number);
}

int	ft_is_positive(int nb, int minus)
{
	if (nb == 0)
		return (0);
	if (minus % 2 != 0)
		nb *= -1;
	return (nb);
}

int	ft_atoi(char *str)
{
	int		i;
	int		j;
	int		minus;
	char	number_char[100];

	i = 0;
	j = 0;
	minus = 0;
	while (str[i] != '\0' && ft_plusminus_and_spaces(str[i]) == 0)
	{
		if (str[i] == '-')
			minus++;
		i++;
		j++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		number_char[i - j] = str[i];
		i++;
	}
	number_char[i - j] = '\0';
	return (ft_is_positive(ft_convert_text_to_int(number_char), minus));
}

/*
int	main(void)
{
	printf("%d\n", ft_atoi(""));
	return (0);
}
*/
