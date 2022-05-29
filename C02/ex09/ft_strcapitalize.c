/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpalomo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:05:32 by rpalomo-          #+#    #+#             */
/*   Updated: 2022/05/23 16:19:31 by rpalomo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_is_symbol(char c)
{
	if ((c > '9' && c < 'A') || (c > 'Z' && c < 'a'))
		return (0);
	else if (c < '0' || c > 'z')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 || ft_is_symbol(str[i - 1]) == 0)
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	int	i;
	char	str[50] = "eSTo:eS@un;tEXto+de-pruEBa muy*cuRRADo";

	ft_strcapitalize(str);
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}
*/
