/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:24:00 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/05/25 18:57:14 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_change_to_positive(int nb)
{
	int	num;

	if (nb > 0)
		return (nb);
	if (nb == 0 || nb == -0)
	{
		write(1, "0", 1);
		return (nb);
	}
	if (nb != -2147483648 && nb != -0)
		write(1, "-", 1);
	num = nb * -1;
	return (num);
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

int	ft_control_max_int(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (-1);
	}
	return (0);
}

void	ft_putnbr(int nb)
{
	int	i;
	int	num;
	int	aux;
	int	control;

	control = ft_control_max_int(nb);
	nb = ft_change_to_positive(nb);
	i = 0;
	num = nb;
	while (num != 0 && control == 0)
	{
		num /= 10;
		i++;
	}
	while (i > 0 && control == 0)
	{
		num = nb / ft_pow(10, i - 1);
		aux = nb / ft_pow(10, i);
		if (i == 10)
			aux = 0;
		num -= aux * 10;
		num += 48;
		write(1, &num, 1);
		i--;
	}
}

/*
int	main(void)
{
	ft_putnbr(-0);
	return (0);
}
*/
