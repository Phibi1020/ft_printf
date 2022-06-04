/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftan <ftan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 15:54:25 by ftan              #+#    #+#             */
/*   Updated: 2022/05/29 16:03:16 by ftan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_nbr_hex(va_list args, char c)
{
	int				i;
	unsigned int 	num;

	i = 0;
	num = va_arg(args, unsigned int);
	if (c == 'x')
		i = ft_put_nbr_base(num, "0123456789abcdef");
	else if (c == 'X')
		i = ft_put_nbr(num, "0123456789ABCDEF");
	return (i);
}