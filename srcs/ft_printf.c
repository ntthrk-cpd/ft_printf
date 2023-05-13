/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 00:45:22 by ncheepan          #+#    #+#             */
/*   Updated: 2023/05/14 00:45:40 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"
#include <stdarg.h>

int	ft_printf(const char *format, ...)
{
	int	len;
	va_list	ap;

	if (!format)
		return NULL;
	len = 0;
	va_start(ap, format);
	while(*format)
	{
		if(*format == '%')
		else
	}
	return (len);	
}
