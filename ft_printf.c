/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:21:38 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/23 13:44:55 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_formatchek(va_list args, char c)
{
	int	count;

	count = 0;
	if (c == '%')
		count = ft_putchar('%');
	if (c == 'c')
		count = ft_putchar(va_arg(args, int));
	if (c == 's')
		count = ft_putstr(va_arg(args, char *));
	if (c == 'd' || c == 'i')
		count = ft_putnbr(va_arg(args, int));
	if (c == 'x')
		count = ft_puthexa(va_arg(args, long), 'x');
	if (c == 'X')
		count = ft_puthexa(va_arg(args, long), 'X');
	if (c == 'u')
		count = ft_putunint(va_arg(args, unsigned int));
	if (c == 'p')
		count = ft_putadrr(va_arg(args, void *));
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		count;
	int		i;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, str);
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count += ft_formatchek(args, str[i]);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
			count++;
		}
	}
	va_end(args);
	return (count);
}
