/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:40:41 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/05/17 13:10:22 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result;
	int	rest;

	result = *a / *b;
	rest = *a % *b;
	*a = result;
	*b = rest;
}

/*
int	main(void)
{
	int	num1;
	int	num2;
	int	*a;
	int	*b;

	num1 = 42;
	num2 = 10;
	a = &num1;
	b = &num2;
	ft_ultimate_div_mod(a, b),
	printf("%d\n", num1);
	printf("%d\n", num2);
}
*/
