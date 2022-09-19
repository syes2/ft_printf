/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbae <seungbae@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:22:00 by seungbae          #+#    #+#             */
/*   Updated: 2022/09/19 13:21:37 by seungbae         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	print_str(char *str);
int	print_nbr(int num);
int	print_unb(unsigned int num);
int	print_char(char c);
int	print_hex(unsigned int num, char c);
int	type_check(const char type, va_list *ap);
int	ft_printf(const char *format, ...);
int	print_ptr(unsigned long long num);

#endif
