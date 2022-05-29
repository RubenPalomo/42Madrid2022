/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 18:24:33 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/05/16 18:24:55 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb(void)
{
	int	i;
	int	hundreds;
	int	tens;
	int	units;
	int	rest;

	i = 0;
	while (i <= 789)
	{
		hundreds = i / 100 + 48;
		rest = i - (hundreds - 48) * 100;
		tens = rest / 10 + 48;
		rest = i / 10;
		units = i - (rest * 10) + 48;
		if ((units > tens) && (tens > hundreds))
		{
			write(1, &hundreds, 1);
			write(1, &tens, 1);
			write(1, &units, 1);
			if (i != 789)
				write(1, ", ", 2);
		}
		i++;
	}
}

/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
