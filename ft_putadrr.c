/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadrr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:08:15 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/22 11:59:50 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthexa_adrr(unsigned long int n, char b)
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
	return (1);
}

int	ft_putadrr(void *ptr)
{
	unsigned long int	ptr_adrr;
	int					count;
	
	ptr_adrr = (unsigned long int)ptr;
	count = 0;
	count = ft_putchar('0');
	count += ft_putchar('x');
	count += ft_puthexa_adrr(ptr_adrr, 'x');
	return (count);
}