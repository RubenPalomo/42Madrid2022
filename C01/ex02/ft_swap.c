/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:26:05 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/05/21 17:15:28 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<unistd.h>

void	ft_swap(int *a, int *b)
{
	int	a_value;

	a_value = *a;
	*a = *b;
	*b = a_value;
}

/*
int	main(void)
{
	int	a_value;
	int	b_value;
	int	*a;
	int	*b;

	a_value = 42;
	b_value = 69;
	a = &a_value;
	b = &b_value;
	ft_swap(a, b);
	write(1, &a_value, 1);
	write(1, " - ", 3);
	write(1, &b_value, 1);
	return (0);
}
 */
