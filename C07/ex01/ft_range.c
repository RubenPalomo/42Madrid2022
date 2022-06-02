/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 10:34:18 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/06/01 22:01:06 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*array_nb;

	if (min > max)
		return (NULL);
	array_nb = malloc(sizeof(int) * (max - min));
	i = min;
	j = 0;
	while (i < max)
	{
		array_nb[j] = i;
		i++;
		j++;
	}
	return (array_nb);
}

/*
int	main(void)
{
	int	i;
	int	*array_nb;

	i = 0;
	array_nb = ft_range(1, 4);
	while (i < 3)
	{
		printf("%d", array_nb[i]);
		i++;
	}
	return (0);
}
*/
