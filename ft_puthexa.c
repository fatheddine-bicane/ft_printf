/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:54:13 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/22 10:29:00 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_hexacount(long n)
{
	int		count;

	count = 0;
	while (n > 0)
	{
		n /= 16;
		count++;
	}
	return (count);
}

int	ft_puthexa(long n, char b)
{
	char	*base_x;
	char	*base_x_upper;
	int		count;

	count = 0;
	base_x = "0123456789abcdef";
	base_x_upper = "0123456789ABCDEF";
	if (n >= 16)
		ft_puthexa(n / 16, b);
	if (b == 'x')
		ft_putchar(base_x[n % 16]);
	else if (b == 'X')
		ft_putchar(base_x_upper[n % 16]);
	return (ft_hexacount(n));
}
