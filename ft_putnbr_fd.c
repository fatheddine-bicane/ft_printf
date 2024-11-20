/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:51:12 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/20 17:51:15 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	n_long;

	n_long = n;
	if (n_long < 0)
	{
		ft_putchar_fd('-', fd);
		n_long *= -1;
	}
	if (n_long > 9)
	{
		ft_putnbr_fd(n_long / 10, fd);
		ft_putchar_fd(n_long % 10 + 48, fd);
	}
	else
	{
		ft_putchar_fd(n_long + 48, fd);
	}
}
