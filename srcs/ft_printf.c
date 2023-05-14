/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 00:45:22 by ncheepan          #+#    #+#             */
/*   Updated: 2023/05/15 03:10:03 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_dispart()
{

}

int	ft_printf(const char *format, ...)
{
	int	len;
	va_list	ap;

	if (!format || format == '\0')
		return (0);
	len = 0;
	va_start(ap, format);
	while(*format)
	{
		if(*format == '%')
		else
	}
	va_end(ap);
	return (len);	
}
