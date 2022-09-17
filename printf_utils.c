/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbae <seungbae@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:50:20 by seungbae          #+#    #+#             */
/*   Updated: 2022/09/17 17:20:27 by seungbae         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int find_format(char *str, va_list ap);
{

}

static int print_char(char c)
{
	write(1, &c, ,1);
	return (1);
}

static int print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		wirte(1, &c, 1);
		i++;
	}
	return (i);
}

static int	print_hex(unsigned int num)
{
	int i;

	i = 0;
	while (num > 0)
	{
		
	}
}

static int print_