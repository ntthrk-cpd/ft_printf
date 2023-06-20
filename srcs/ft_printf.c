/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 00:45:22 by ncheepan          #+#    #+#             */
/*   Updated: 2023/06/20 19:08:41 by ncheepan         ###   ########.fr       */
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
	else if (*format == 'd' || *format == 'i')
		len += ft_prtint(va_arg(args, int));
	else if (*format == 'u')		
	else if (*format == 'x'|| *format == 'X')
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
