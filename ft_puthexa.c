/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:54:13 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/21 21:41:07 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_hexacount(long n)
{
	int		count;
	long	n_n;

	
	count = 0;
	n_n = n;
	while (n_n > 0)
	{
		n_n /= 16;
		count++;
	}
	return (count);
}

void	ft_puthexa(long n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
	{
		ft_puthexa(n / 16);
	}
		ft_putchar(base[n % 16]);
}
// int main()
// {
// 	// long n = 0x3A7F4B;
// 	// printf("%d", ft_hexacount(n));
// }