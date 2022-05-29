/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:27:52 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/05/21 17:16:22 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	a;
	int	b;
	int	result;
	int	rest;
	int	*div;
	int	*mod;

	a = 42;
	b = 2;
	div = &result;
	mod = &rest;
	ft_div_mod(a, b, div, mod);
	printf("%d\n", result);
	printf("%d\n", rest);
	return (0);
}
*/
