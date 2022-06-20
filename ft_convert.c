/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftan <ftan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 16:03:31 by ftan              #+#    #+#             */
/*   Updated: 2022/06/20 18:04:59 by ftan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert(const char c, va_list args)
{
	if (c == 'c')
		return (ft_single_char(args));
	if (c == 's')
		return (ft_string(args));
	if (c == 'p')
		return (ft_hex_string(args));
	if (c == 'd' || c == 'i')
		return (ft_decimal(args));
	if (c == 'u')
		return (ft_unsigned_dec(args));
	if (c == 'x' || c == 'X')
		return (ft_nbr_hex(args, c));
	if (c == '%')
		return (ft_percent('%'));
	return (0);
}
