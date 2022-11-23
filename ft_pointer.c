/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 10:37:41 by ztrottie          #+#    #+#             */
/*   Updated: 2022/11/23 15:24:07 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long ptr)
{
	int	count;

	count = 2;
	if (!ptr)
	{
		write(1, "0x0", 3);
		return (3);
	}
	write(1, "0x", 2);
	count += ft_putnbr_base_ul(ptr);
	return (count);
}
