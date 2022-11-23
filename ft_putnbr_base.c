/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 10:31:42 by ztrottie          #+#    #+#             */
/*   Updated: 2022/11/23 15:49:40 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned int nbr)
{
	unsigned int	nb;

	nb = nbr;
	if (nb / ft_strlen(HEXA) != 0)
		ft_putnbr_base((nb / ft_strlen(HEXA)));
	ft_putchar_fd(HEXA[nb % ft_strlen(HEXA)], 1);
	return (ft_hexa_len(nbr));
}
