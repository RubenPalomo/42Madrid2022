/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:28:56 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/05/27 20:20:45 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*text;

	i = 1;
	argc = 1;
	while (argv[i] != '\0')
	{
		text = argv[i];
		j = -1;
		while (text[++j] != '\0')
			write(1, &text[j], 1);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
