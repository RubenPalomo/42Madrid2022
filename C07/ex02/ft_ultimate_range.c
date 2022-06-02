/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 13:07:09 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/06/01 22:15:36 by rpalomo-         ###   ########.fr       */
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

	if (min > max)
	{
		range = NULL;
		return (0);
	}
	size = max - min;
	array = (int *)malloc(sizeof(int) * size);
	i = min - 1;
	j = -1;
	while (++i < max)
		array[++j] = i;
	*range = array;
	if (range != NULL)
		return (size);
	return (-1);
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
