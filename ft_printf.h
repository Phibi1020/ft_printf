/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftan <ftan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:20:23 by ftan              #+#    #+#             */
/*   Updated: 2022/06/20 15:06:19 by ftan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int ft_printf(const char *fmt, ...);
int ft_convert(const char c, va_list args);
int ft_decimal(va_list args);
int ft_hex_string(va_list args);
int ft_nbr_hex(va_list args, char c);
int ft_percent(char c);
int ft_single_char(va_list args);
int ft_string(va_list args);
int ft_unsigned_dec(va_list args);
void ft_put_nbr_base(unsigned int n, const char *s, int *i);

#endif