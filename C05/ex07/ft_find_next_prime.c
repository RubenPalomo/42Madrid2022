/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 14:06:21 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/05/29 12:37:18 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	else if (nb == 2147483647)
		return (1);
	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	else if (ft_is_prime(nb) == 1)
		return (nb);
	else if ((nb % 2) == 0)
		nb++;
	while (ft_is_prime(nb) != 1)
	{
		nb += 2;
	}
	return (nb);
}

/*
int	main(void)
{
	printf("%d\n", ft_find_next_prime(2147483646));
	return (0);
}
*/
