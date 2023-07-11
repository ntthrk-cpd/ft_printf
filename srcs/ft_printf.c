/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:16:58 by ncheepan          #+#    #+#             */
/*   Updated: 2023/07/11 17:33:49 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_parse_flags(const char *format, va_list args)
{
    t_flags flags;
    int i;
    int printf_count;

    i = 0;
    printf_count = 0;
    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;
            ft_init_flags(&flags);
            i = ft_set_flags((char *)(format + i), args, &flags);
            //printf_count += ft_print_flags(args, &flags);
        }
        else
            printf_count += ft_prtchr(format[i]);
        i++;
    }
    return (printf_count);
}

int ft_printf(const char *format, ...)
{
    int printf_count;
    va_list args;
    
    if (!format || !*format)
        return (0);  
    printf_count = 0;
    va_start(args, format);
    printf_count = ft_parse_flags(format, args);
    va_end(args);
    return (printf_count);
}
