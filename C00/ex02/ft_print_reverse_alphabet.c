/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 19:09:52 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/05/15 19:09:57 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	i;

	i = 122;
	while (i >= 97)
	{	
		write(1, &i, 1);
		i--;
	}
}

/*
int main(void)
{
    ft_print_reverse_alphabet();
    return (0);
}
*/
