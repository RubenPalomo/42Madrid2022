/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:55:41 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/05/29 14:52:18 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_sort_params(char **texts, int size)
{
	int		i;
	int		j;
	char	*aux;

	i = 1;
	j = 0;
	while (i < size)
	{
		if (texts[i][j] > texts[i + 1][j])
		{
			aux = texts[i];
			texts[i] = texts[i + 1];
			texts[i + 1] = aux;
			i = 1;
			j = 0;
		}
		else if (texts[i][j] == texts[i + 1][j])
			j++;
		else
		{
			j = 0;
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		size;
	char	*text;

	argc = 1;
	size = 0;
	while (argv[size] != '\0')
		size++;
	ft_sort_params(argv, --size);
	size = 0;
	while (argv[++size] != '\0')
	{
		text = argv[size];
		i = -1;
		while (text[++i] != '\0')
			write(1, &text[i], 1);
		write(1, "\n", 1);
	}
	return (0);
}
