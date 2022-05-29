/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:24:14 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/05/25 14:58:26 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	num;

	i = 1;
	num = nb;
	while (i < nb)
	{
		num *= i;
		i++;
	}
	if (num == 0)
		return (1);
	else if (num < 0)
		return (0);
	return (num);
}

/*
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(5));
	return (0);
}
*/
