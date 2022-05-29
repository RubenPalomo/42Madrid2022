/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:07:59 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/05/28 14:18:04 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 0;
	if (power == 0)
		return (1);
	if (power > 0)
		res = nb * ft_recursive_power(nb, power - 1);
	return (res);
}

/*
int	main(void)
{
	printf("%d\n", ft_recursive_power(2, 3));
	return (0);
}
*/
