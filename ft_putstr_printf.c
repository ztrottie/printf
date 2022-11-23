/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 10:27:07 by ztrottie          #+#    #+#             */
/*   Updated: 2022/11/23 13:26:55 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_printf(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		s = "(null)";
	while (i < ft_strlen(s))
		write(1, &s[i++], 1);
	return (ft_strlen(s));
}
