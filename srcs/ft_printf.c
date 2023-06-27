/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntthrk-ch <ntthrk-ch@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 00:45:22 by ncheepan          #+#    #+#             */
/*   Updated: 2023/06/23 19:09:30 by ntthrk-ch        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftprintf.h"

int	ft_dispart(char *format, va_list *args)
{
	int	len;

	len = 0;
	if (*format == '%')
		len += ft_putchar_fd('%', sizeof(char);
	else if (*format == 'c')
		len += ft_prtchr(va_arg(args, char));
	else if (*format == 's')
		len += ft_prtstr(va_arg(args, char *)));
	else if (*format == 'p')
		len += ft_prt_pointer(va_arg(args, void *);
	else if (*format == 'd' || *format == 'i')
		len += ft_prt_int(va_arg(args, int));
	else if (*format == 'u')		
		len += ft_prt_unsigned(va_arg(args, unsigned int));
	else if (*format == 'x')
		len += ft_prt_hex(va_arg(args, unsigned int), 'x');
	else if (*format == 'X')
		len += ft_prt_hex(va_arg(args, unsigned int), 'X');
	return len;
}

int	ft_printf(const char *format, ...)
{
	int	printf_length;
	va_list	args;

	if (!format || format == '\0')
		return (0);
	printf_length = 0;
	va_start(args, format);
	while(*format)
	{
		if(*format == '%')
			printf_length += ft_dispart(*++format, args);
		else
			printf_length += ft_putchar_fd(*format, sizeof(char));
		format++;   
	}
	va_end(args);
	return (printf_length);	
}
