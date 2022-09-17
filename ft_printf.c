/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbae <seungbae@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:51:13 by seungbae          #+#    #+#             */
/*   Updated: 2022/09/17 18:26:59 by seungbae         ###   ########seoul.kr  */
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
			len += data_type(&format, ap) - 1;
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
	int	len;

	len = 0;
	if (*format == 'c')
		len += print_char(va_arg(ap, int));
	else if (*format == 's')
		len +=  (print_str(va_arg(ap, char*));
	else if (*format == 'd' || *format == 'i')
		len +=  (print_nbr(va_arg(ap, int));
	else if (*format == 'x' || *format == 'X' || *format == 'u')
		len +=  (print_hex(va_arg(ap, unsigned int));
	else if (*format == 'p')
		len +=  (print_pointer(va_arg(ap, long long));
	else if (*format == '%')
		len += write(1, %, 1);
	return (len);
}

static int print_char(char c)
{
	write(1, &c, ,1);
	return (1);
}