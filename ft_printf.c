/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:21:38 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/20 16:57:46 by fbicane          ###   ########.fr       */
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
		if (str[i] == % && str[i] == 'c')
			ft_putchar(va_arg(args, char));
		if (str[i] == % && str[i + 1] == 's')
			ft_putstr(va_arg(args, char *));
		if (str[i] == % && str[i + 1] == %)
			ft_putstr('%');
		else
			ft_putstr(str[i]);
		i++;
	}
}
