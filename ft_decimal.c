/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftan <ftan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 15:36:16 by ftan              #+#    #+#             */
/*   Updated: 2022/06/20 18:11:20 by ftan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int num, int *i)
{
	char	c;

	if (num == -2147483648)
	{
		*i += write(1, "-2147483648", 11);
		return ;
	}
	else if (num < 0)
	{
		*i += write(1, "-", 1);
		num *= -1;
	}
	c = '0' + (num % 10);
	if (num >= 10)
		ft_putnbr(num / 10, i);
	*i += write(1, &c, 1);
}

int	ft_decimal(va_list args)
{
	int	i;
	int	num;

	num = va_arg(args, int);
	i = 0;
	ft_putnbr(num, &i);
	return (i);
}
