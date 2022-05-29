/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:40:39 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/05/27 20:22:27 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*text;

	i = 0;
	argc = 1;
	while (argv[i] != '\0')
		i++;
	while (--i > 0)
	{
		text = argv[i];
		j = -1;
		while (text[++j] != '\0')
			write(1, &text[j], 1);
		write(1, "\n", 1);
	}
	return (0);
}
