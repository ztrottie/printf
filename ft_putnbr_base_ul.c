/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_ul.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:45:05 by ztrottie          #+#    #+#             */
/*   Updated: 2022/11/23 16:10:30 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base_ul(unsigned long nbr)
{
	unsigned long	nb;

	nb = nbr;
	if (nb / ft_strlen(HEXA) != 0)
		ft_putnbr_base_ul((nb / 16));
	ft_putchar_fd(HEXA[nb % 16], 1);
	return (ft_hexa_len(nbr));
}
