/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sushu <sushu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:51:13 by seungbae          #+#    #+#             */
/*   Updated: 2022/09/18 22:54:19 by sushu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int			len;
	va_list		ap;

	len = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			len += type_check(*format, &ap);
		}
		else
			len += print_char(*format);
		format++;
	}
	va_end(ap);
	return (len);
}

int	type_check(const char type, va_list *ap)
{
	int	len;

	len = 0;
	if (type == 'c')
		len += print_char(va_arg(*ap, int));
	else if (type == 's')
		len += (print_str(va_arg(*ap, char *)));
	else if (type == 'd' || type == 'i')
		len += (print_nbr(va_arg(*ap, int)));
	else if (type == 'x' || type == 'X')
		len += (print_hex(va_arg(*ap, unsigned int), type));
	else if (type == 'u')
		len += (print_unb(va_arg(*ap, long long)));
	else if (type == 'p')
		len += (print_ptr(va_arg(*ap, unsigned long long)));
	else if (type == '%')
		len += write(1, "%", 1);
	return (len);
}

int	print_char(char c)
{
	write(1, &c, 1);
	return (1);
}
