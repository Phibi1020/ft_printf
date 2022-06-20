/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftan <ftan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 14:09:19 by ftan              #+#    #+#             */
/*   Updated: 2022/06/20 15:17:57 by ftan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
int ft_hex_string(va_list args)
{
    int     i;
    unsigned long    temp;

    temp = va_arg(args, unsigned long);
    i = write(1, "0x", 2);
    ft_put_nbr_base(temp, "0123456789abcdef", &i);
    return (i);
}