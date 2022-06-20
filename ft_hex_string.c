/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftan <ftan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 14:09:19 by ftan              #+#    #+#             */
/*   Updated: 2022/06/20 18:12:04 by ftan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	ft_put_pointer_base(unsigned long num, const char *s, int *i)
{
	if (num >= 16)
		ft_put_pointer_base(num / 16, s, i);
	*i += write(1, &(s[num % 16]), 1);
}

int ft_hex_string(va_list args)
{
    int     i;
    unsigned long    temp;

    temp = va_arg(args, unsigned long);
    i = write(1, "0x", 2);
    ft_put_pointer_base(temp, "0123456789abcdef", &i);
    return (i);
}