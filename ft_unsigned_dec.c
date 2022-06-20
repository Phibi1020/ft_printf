/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_dec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftan <ftan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 15:47:32 by ftan              #+#    #+#             */
/*   Updated: 2022/06/20 14:58:57 by ftan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_nbr_unsigned(unsigned int num, int *i)
{
	char c;

	if (num == 4294967295)
	{
		i += write(1, "4294967295", 10);
		return ;
	}
	else if (num >= 10)
		ft_put_nbr_unsigned(num / 10, i);
	c = '0' + (num % 10);
	*i += write(1, &c, 1);
}

int	ft_unsigned_dec(va_list args)
{
	int				i;
	unsigned int	ret;

	i = 0;
	ret = va_arg(args, unsigned int);
	ft_put_nbr_unsigned(ret,&i);
	return (i);
}