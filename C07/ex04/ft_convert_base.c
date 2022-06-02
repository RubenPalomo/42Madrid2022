/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:58:42 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/06/01 17:24:41 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

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

int	ft_is_space_or_plusminus(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (0);
	else if (c == '+' || c == '-')
		return (0);
	return (1);
}

int	ft_atoi(char *txt)
{
	int	i;
	int	numb;

	if (txt[0] == '\0')
		return (0);
	i = -1;
	while (txt[++i] != '\0')
		numb = (numb * 10) + (txt[i] - '0');
	return (numb);
}

char	*ft_final_conversor(int n, int base, int size_n)
{
	int		i;
	char	*final;

	i = -1;
	final = malloc(sizeof(char) * size_n);
	if (n >= base)
	{
		ft_final_conversor(n / base, base, size_n);
		ft_final_conversor(n % base, base, size_n);
	}
	if (n < base)
	{
		n += '0';
		final[i] = n;
	}
	return (final);
}

char	*ft_change_base(int n, int minus, char *base_from, char *base_to)
{
	int	i;
	int	size_base_from;
	int	size_base_to;

	if (minus % 2 != 0)
		write(1, "-", 1);
	i = n;
	size_base_from = 0;
	size_base_to = 0;
	while (base_from[size_base_from] != '\0')
		size_base_from++;
	while (base_to[size_base_to] != '\0')
		size_base_to++;
	while (--size_base_from >= 0)
		n += i * ft_pow(10, size_base_from);
	i = n;
	while (i > 0)
		i /= 10;
	return (ft_final_conversor(n, size_base_to, i));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i;
	int		minus;
	int		cont;
	char	*numbers;
	int		number;

	if (base_from == '\0' || base_to == '\0')
		return (NULL);
	i = -1;
	cont = 0;
	minus = 0;
	numbers = malloc(sizeof(char) * 100);
	while (nbr[++i] != '\0' && ft_is_space_or_plusminus(nbr[i]))
	{
		if (nbr[i] == '-')
			minus++;
		cont++;
	}
	while (nbr[i] != '\0' && i >= '0' && i <= '9')
	{
		numbers[i - cont] = nbr[i];
		i++;
	}
	number = ft_atoi(numbers);
	return (ft_change_base(number, minus, base_from, base_to));
}

/*
int	main(void)
{
	printf("%s\n", ft_convert_base("   +-+- 5", "0123456789", "01"));
	return (0);
}
*/
