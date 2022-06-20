/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftan <ftan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 15:54:25 by ftan              #+#    #+#             */
/*   Updated: 2022/06/20 18:01:55 by ftan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbr_hex(va_list args, char c)
{
	int				i;
	unsigned int	num;

	i = 0;
	num = va_arg(args, unsigned int);
	if (c == 'x')
		ft_put_nbr_base(num, "0123456789abcdef", &i);
	else if (c == 'X')
		ft_put_nbr_base(num, "0123456789ABCDEF", &i);
	return (i);
}
