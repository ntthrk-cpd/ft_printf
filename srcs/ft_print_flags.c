/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_flags_flags.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:37:03 by ncheepan          #+#    #+#             */
/*   Updated: 2023/07/12 14:38:25 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_print_flags(va_list args, t_flags *flags)
{
    int printf_count;

    printf_count = 0;
    if (flags->type == 'c')
        printf_count += ft_print_char(args, flags);
    else if (flags->type == 's')
        printf_count += ft_print_string(args, flags);
    else if (flags->type == 'p')
        printf_count += ft_print_pointer(args, flags);
    else if (flags->type == 'd' || flags->type == 'i')
        printf_count += ft_print_int(args, flags);
    else if (flags->type == 'u')
        printf_count += ft_print_unsigned_int(args, flags);
    else if (flags->type == 'x' || flags->type == 'X')
        printf_count += ft_print_hex(args, flags);
    else if (flags->type == '%')
        printf_count += ft_print_percent(flags);
    return (printf_count);
}

int ft_print_width(int width, int minus, int zero)
{
    int printf_count;

    printf_count = 0;
    while (width > 0)
    {
        if (minus == 1)
            printf_count += ft_prtchr(' ');
        else if (zero == 1)
            printf_count += ft_prtchr('0');
        else
            printf_count += ft_prtchr(' ');
        width--;
    }
    return (printf_count);
}

int ft_print_precision(int precision)
{
    int printf_count;

    printf_count = 0;
    while (precision > 0)
    {
        printf_count += ft_prtchr('0');
        precision--;
    }
    return (printf_count);
}