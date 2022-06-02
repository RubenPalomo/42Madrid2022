/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 12:43:16 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/06/01 15:05:40 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_is_positive(int n)
{
	if (n > 0)
		return (n);
	n *= -1;
	write(1, "-", 1);
	return (n);
}

void	ft_conversor_and_printer(int n, int base)
{
	if (n >= base)
	{
		ft_conversor_and_printer(n / base, base);
		ft_conversor_and_printer(n % base, base);
	}
	if (n < base)
	{
		n += '0';
		write(1, &n, 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size_base;

	nbr = ft_is_positive(nbr);
	size_base = 0;
	while (base[size_base] != '\0')
		size_base++;
	ft_conversor_and_printer(nbr, size_base);
}

/*
int	main(void)
{
	ft_putnbr_base(-6, "01");
	return (0);
}
*/
