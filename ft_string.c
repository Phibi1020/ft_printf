/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftan <ftan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 11:37:08 by ftan              #+#    #+#             */
/*   Updated: 2022/06/20 17:54:48 by ftan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_string (va_list args)
{
	char	*str;
	int		i;

	i = 0;
	str = va_arg(args, char *);
	if (!str)
		i = write(1, "(null)", 6);
	else
	{
		while (str[i])
			write(1, &str[i++], 1);
	}
	return (i);
}