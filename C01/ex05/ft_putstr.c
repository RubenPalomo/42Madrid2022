/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:14:20 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/05/21 17:18:01 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char	*str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

/*
int	main(void)
{
	char*	text;
	char*	*str;

	text = "42 mola cantidubi";
	str = &text;
	ft_putstr(*str);
	return (0);
}
*/
