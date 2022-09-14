/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbae <seungbae@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:51:13 by seungbae          #+#    #+#             */
/*   Updated: 2022/09/14 16:58:10 by seungbae         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int date_type()
{
	
	return 
}

int	ft_printf(const char	*format, ...)
{
	va_list	ap;
	int	len;
	int	i;

	i = 0;
	va_start(ap, format);
	while(format[i])
	{
		if (format[i] == '%')
		{
			while(format[i] )
				i++;
			if ()
			{

			}
		}
		else
		{

		}
	}
	va_end(ap);
	return (len);
}
