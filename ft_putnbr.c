/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:51:12 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/21 21:48:21 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nb_count(int nb)
{
	long	l_nb;
	int		count;

	count = 0;
	l_nb = nb;
	if (l_nb < 0)
	{
		l_nb *= -1;
		count++;
	}
	while(l_nb > 0)
	{
		l_nb /= 10;
		count++;
	}
	return (count);
}

int	ft_putnbr(int n)
{
	long	n_long;

	n_long = n;
	if (n_long < 0)
	{
		ft_putchar('-');
		n_long *= -1;
	}
	if (n_long > 9)
	{	
		ft_putnbr(n_long / 10);
	}
	ft_putchar(n_long % 10 + 48);
	return (ft_nb_count(n));
}
