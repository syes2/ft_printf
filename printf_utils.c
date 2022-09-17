/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbae <seungbae@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:50:20 by seungbae          #+#    #+#             */
/*   Updated: 2022/09/17 19:33:05 by seungbae         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_str(char *str)
{
	int	i;

	i = 0;
	if (!str)
		str = "(null)";
	while (str[i])
	{
		wirte(1, &c, 1);
		i++;
	}
	return (i);
}

static int	print_hex(unsigned int num, char c)
{
	int	len;

	len = 0;
	while (num <= 0)
	{
		if (num >= 16)
		{
			len += print_hex(num / 16);
			len += print_hex(num % 16);
		}
		else
		{
			if (num < 10)
				len += print_char(num + '0');
			else
				len += print_char(num + 'A');
		}
	}
	return (len);
}

static int	print_nbr(int num)
{
	int	len;

	len = 0;
	while (num <= 0)
	{
		if (num >= 10)
		{
			len += print_nbr(num / 10);
			len += print_nbr(num % 10);
		}
		else
			len += print_char(num + '0');
	}
	return (len);
}
