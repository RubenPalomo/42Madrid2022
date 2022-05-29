/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:22:52 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/05/26 17:13:38 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argsc, char **argsv)
{
	char	*text;
	int		i;

	argsc = 1;
	i = -1;
	text = argsv[0];
	while (text[++i] != 0)
		write(1, &text[i], 1);
	write(1, "\n", 1);
	return (0);
}
