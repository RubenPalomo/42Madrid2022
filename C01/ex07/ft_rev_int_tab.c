/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:50:21 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/05/21 17:24:36 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	j = size;
	while (i < size / 2)
	{
		aux = tab[i];
		tab[i] = tab[j - 1];
		tab[j - 1] = aux;
		i++;
		j--;
	}
}

/*
int	main(void)
{
	int i = 0;
	int	array[5] = {48, 49, 50, 51, 52};
	ft_rev_int_tab(array, 5);
	while (i < 5)
	{
		write(1, &array[i], 1);
		i++;
	}
	return (0);
}
*/
