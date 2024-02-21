/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghannou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:57:00 by aghannou          #+#    #+#             */
/*   Updated: 2024/02/21 16:59:23 by aghannou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

#include <unistd.h>

int	check_printable(char c)
{
	if (c >= ' ' && c <= '~')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(check_printable(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
