/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_upp.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 11:49:08 by ztrottie          #+#    #+#             */
/*   Updated: 2022/11/23 16:09:33 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base_upp(unsigned int nbr)
{
	unsigned int	nb;

	nb = nbr;
	if (nb / 16 != 0)
		ft_putnbr_base_upp(nb / 16);
	ft_putchar_fd(HEXA_UPP[nb % 16], 1);
	return (ft_hexa_len(nbr));
}
