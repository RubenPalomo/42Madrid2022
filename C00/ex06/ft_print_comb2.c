/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 19:07:47 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/05/15 20:40:53 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print_numbers(int thou, int hund, int tens, int uni)
{
	write(1, &thou, 1);
	write(1, &hund, 1);
	write(1, " ", 1);
	write(1, &tens, 1);
	write(1, &uni, 1);
}

void	ft_print_com2(void)
{
	int	i;
	int	thousands;
	int	hundreds;
	int	tens;
	int	rest;

	i = 0;
	while (i < 9899)
	{
		i++;
		thousands = i / 1000 + 48;
		rest = i - (thousands - 48) * 1000;
		hundreds = rest / 100 + 48;
		rest = i - (thousands - 48) * 1000 - (hundreds - 48) * 100;
		tens = rest / 10 + 48;
		rest = i / 10;
		rest = i - (rest * 10) + 48;
		if (thousands + hundreds < tens + rest)
		{
			print_numbers(thousands, hundreds, tens, rest);
			if (i < 9899)
				write(1, ", ", 2);
		}
	}
}

int	main(void)
{
	ft_print_com2();
	return (0);
}
