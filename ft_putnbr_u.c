/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 11:45:59 by ztrottie          #+#    #+#             */
/*   Updated: 2022/11/23 12:12:59 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n)
{
	unsigned int	nbr;

	nbr = n;
	if (nbr / 10 != 0)
		ft_putnbr_fd(nbr / 10, 1);
	ft_putchar_fd(nbr % 10 + '0', 1);
	return (ft_putnbr_len(n));
}
