/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:21:38 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/20 12:26:23 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	ft_printf(const char *str, ...)
{
	int	count;
	int	i;
	va_list	args;
	while (str[i])
	{
		if (str[i] == %)
		{
			if (str[i + 1] == s)
				ft_putstr(/*chi haja*/);
		}
		else
			ft_putstr(str[i]);
		i++;
	}
}
