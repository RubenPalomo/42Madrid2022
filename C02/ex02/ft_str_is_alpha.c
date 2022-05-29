/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:40:40 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/05/19 12:07:05 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'z' || (str[i] > 'Z' && str[i] < 'a' ))
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	char	str[50] = "Estoesuntextodepruebamuycurrado";

	printf("%d\n", ft_str_is_alpha(str));
	return (0);
}
*/
