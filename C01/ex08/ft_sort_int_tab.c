/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:41:10 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/05/21 20:38:56 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	num;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				num = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = num;
			}
			j++;
		}
		i++;
	}
}

/*
int main(void)
{
	int	i;
	int array	[5] = {50, 57, 52, 55, 48};

	i = 0;
	ft_sort_int_tab(array, 5);
	while (i < 5)
	{
		write(1, &tab[i], 1);
		i++;
	}
	return (0);
}
*/
