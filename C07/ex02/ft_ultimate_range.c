/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 13:07:09 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/06/02 17:00:25 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;
	int	size;
	int	*array;

	if (range < 0)
		return (-1);
	if (min > max)
	{
		range = NULL;
		return (0);
	}
	size = max - min;
	array = (int *)malloc(sizeof(int) * size);
	if (array == NULL || min >= max)
		return (0);
	i = min - 1;
	j = -1;
	while (++i < max)
		array[++j] = i;
	*range = array;
	return (size);
}

/*
 
 * * * Copy and paste in line 37 * * *
 
i = 0;
while (i < max - 1)
{
 printf("%d", array[i]);
 i++;
}
*/
/*
int	main(void)
{
	int	i;
	int	*array = NULL;

	i = 0;
	printf("%d", ft_ultimate_range(&array, 1, 15));
	return (0);
}
*/
