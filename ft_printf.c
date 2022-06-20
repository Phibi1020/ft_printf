/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftan <ftan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:20:18 by ftan              #+#    #+#             */
/*   Updated: 2022/06/20 15:05:14 by ftan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_read_content(const char *fmt, va_list args)
{
	int     ret;
	int     i;

	i = 0;
	ret = 0;
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			i++;
			if (fmt[i])
				ret += ft_convert(fmt[i], args);
		}
		else
		{
			ret += write(1, fmt[i], 1);
			i++;
		}
	}
	return ret;
}

int ft_printf(const char *fmt, ...)
{
	va_list args;
	int     ret;

	va_start(args, fmt);
	ret = ft_read_content(fmt, args);
	va_end(args);

	return ret;
}