/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbae <seungbae@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:51:13 by seungbae          #+#    #+#             */
/*   Updated: 2022/09/17 17:20:28 by seungbae         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int			len;
	va_list		ap;

	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			len += data_type(&format, ap) - 2;
		}
		else
			write(1, str, 1);
		format++;
	}
	va_end(ap);
	return (len);
}

static	int	data_type(const char *format, va_list ap)
{
	if (*format == 'c')
		return (print_char(va_arg(ap, int)));
	else if (*format == 's')
		return (print_str(va_arg(ap, char*)));
	else if (*format == 'd' || *format == 'i')
		return (print_nbr(va_arg(ap, int)));
	else if (*format == 'x' || *format == 'X' || *format == 'u')
		return (print_hex(va_arg(ap, unsigned int)));
	else if (*format == 'p')
		return (print_pointer(va_arg(ap, long long)));
	else if (*format == '%')
		return (print_char(*format));
	else
		return (-1);
}
