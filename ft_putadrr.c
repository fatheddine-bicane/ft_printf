/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadrr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:08:15 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/26 13:09:36 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int	ft_putadrr(void *ptr)
{
	unsigned long	ptr_adrr;
	int				count;

	if (!ptr)
		return (ft_putstr("(nil)"));
	ptr_adrr = (unsigned long)ptr;
	count = 0;
	count += ft_putstr("0x");
	count += ft_puthexa(ptr_adrr, 'x');
	return (count);
}
