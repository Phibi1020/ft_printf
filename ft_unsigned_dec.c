/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_dec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftan <ftan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 15:47:32 by ftan              #+#    #+#             */
/*   Updated: 2022/05/29 15:54:08 by ftan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_dec(va_list args)
{
	int				i;
	unsigned int	ret;

	i = 0;
	ret = va_arg(args, unsigned int);
	i = ft_put_nbr_base(ret);
	return (i);
}