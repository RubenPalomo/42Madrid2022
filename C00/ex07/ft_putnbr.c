/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 19:07:47 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/05/16 20:11:08 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_change_to_positive(int nb)
{
	int	num;

	if (nb >= 0)
	{
		return (nb);
	}
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

void	ft_putnbr(int nb)
{
	int	cont;
	int	aux;
	int	num;

	nb = ft_change_to_positive(nb);
	cont = 0;
	num = nb;
	while (num / 10 != 0)
	{
		num /= 10;
		cont++;
	}
	while (cont >= 0)
	{
		num = nb;
		num /= ft_pow(10, cont);
		aux = nb / ft_pow(10, cont + 1);
		num -= aux * 10;
		num += 48;
		write(1, &num, 1);
		cont--;
	}
}

/*
int	main(void)
{
	ft_putnbr(1234);
	return (0);
}
*/
