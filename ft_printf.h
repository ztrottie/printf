/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:14:47 by ztrottie          #+#    #+#             */
/*   Updated: 2022/11/23 16:09:18 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"
# define HEXA "0123456789abcdef"
# define HEXA_UPP "0123456789ABCDEF"

int		ft_printf(const char *str, ...);
int		ft_pointer(unsigned long ptr);
int		ft_putstr_printf(char *s);
int		ft_putnbr_base(unsigned int nbr);
int		ft_putnbr_base_upp(unsigned int nbr);
int		ft_putnbr_printf(int n);
int		ft_putnbr_len(long int n);
size_t	ft_hexa_len(size_t nbr);
int		ft_putnbr_u(unsigned int nb);
int		ft_putnbr_base_ul(unsigned long nbr);

#endif