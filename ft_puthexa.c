/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:54:13 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/20 18:47:27 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthexa(long n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
	{
		ft_puthexa(n / 16);
	}
		ft_putchar_fd(base[n % 16],1);
}
#include <stdio.h>
int main()
{
	ft_puthexa(6788);
	printf("\n%x", 4093409);
}