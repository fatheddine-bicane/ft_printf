/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:54:13 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/22 13:19:22 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthexa(long n, char b)
{
	char	*base_x;
	char	*base_x_upper;
	int		count;

	count = 0;
	base_x = "0123456789abcdef";
	base_x_upper = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_puthexa(n / 16, b);
	if (b == 'x')
		count += ft_putchar(base_x[n % 16]);
	else if (b == 'X')
		count += ft_putchar(base_x_upper[n % 16]);
	return (count);
}
