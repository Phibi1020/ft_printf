/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftan <ftan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 12:21:42 by ftan              #+#    #+#             */
/*   Updated: 2022/06/20 15:28:36 by ftan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_put_nbr_base(unsigned int n, const char *s, int *i)
{
	// unsigned int	temp;

	// temp = (unsigned int)n;
	if (n > 16)
		ft_put_nbr_base(n / ft_strlen(s), s, i);
	*i += write(1, &(s[n % 16]), 1);
}