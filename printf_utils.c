/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sushu <sushu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:50:20 by seungbae          #+#    #+#             */
/*   Updated: 2022/09/18 22:56:18 by sushu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_str(char *str)
{
	int	i;

	i = 0;
	if (!str)
		str = "(null)";
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	print_hex(unsigned int num, char c)
{
	int	len;

	len = 0;
	if (num >= 16)
	{
		len += print_hex(num / 16, c);
		len += print_hex(num % 16, c);
	}
	else
	{
		if (num < 10)
			len += print_char(num + '0');
		else
		{
			if (c == 'X')
				len += print_char(num + 55);
			if (c == 'x')
				len += print_char(num + 87);
		}
	}
	return (len);
}

int	print_nbr(int num)
{
	int	len;
	long long nb;

	nb = num;
	len = 0;
	if (num < 0)
	{
		len += print_char('-');
		nb *= -1;
	}
	if (nb < 10)
		len += print_char(nb + '0');
	else
	{
		len += print_nbr(nb / 10);
		len += print_nbr(nb % 10);
	}
	return (len);
}

int	print_unb(unsigned int num)
{
	int	len;

	len = 0;
	if (num >= 10)
	{
		len += print_unb(num / 10);
		len += print_unb(num % 10);
	}
	if (num < 10)
		len += print_char(num + '0');
	return (len);
}

int print_ptr(unsigned long long num)
{
	int	len;

	len = 0;
	len += print_str("0x");
	len += print_hex(num, 'x');
	return (len);
}