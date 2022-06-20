/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_single_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftan <ftan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 10:56:46 by ftan              #+#    #+#             */
/*   Updated: 2022/06/20 17:52:45 by ftan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_single_char(va_list args)
{
	int		i;
	char	c;

	c = (char)va_arg(args, int);
	i = write(1, &c, 1);
	if (i > 0)
		return (i);
	return (0);
}
