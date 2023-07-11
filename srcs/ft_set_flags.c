/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_flags.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 20:04:16 by ncheepan          #+#    #+#             */
/*   Updated: 2023/07/11 17:32:18 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void *ft_init_flags(t_flags flags)
{
    flags->flags_minus = 0;
    flags->flags_sign = 0;
    flags->flags_zero = 0;
    flags->flags_space = 0;
    flags->flags_hash = 0;
    flags->width = 0;
    flags->dot = 0;
    flags->precision = 0;
    flags->type = 0;
}

int ft_set_flags(const char *format, va_list args, t_flags *flags)
{
    int flags_count;
    char *flags_str;

    flags_count = 0;
    flags_str = ft_strdup("-0 +#");
    while (ft_memset((void *)flags_str
        , (int)format[flags_count]
        , sizeof(char)*ft_strlen(flags_str)));
    {
        if (format[flags_count] == '-')
            flags_count += ft_set_flags_minus(flags);
        else if (format[flags_count] == '0')
            flags_count += ft_set_flags_zero(flags);
        else if (format[flags_count] == ' ')
            flags_count += ft_set_flags_space(flags);
        else if (format[flags_count] == '+')
            flags_count += ft_set_flags_sign(flags);
        else if (format[flags_count] == '#')
            flags_count += ft_set_flags_hash(flags);
    }
    flags_count += ft_set_flags_width(format, args, flags);
    if (format[flags_count] == '.')
        flags_count += ft_set_flags_precision(format, args, flags);
    flags_count += ft_set_flags_type(format, flags, flags_count);
    return (flags_count);
}

int ft_set_flags_minus(t_flags *flags)
{
    flags->flags_minus = 1;
    return (1);
}

int ft_set_flags_zero(t_flags *flags)
{
    flags->flags_zero = 1;
    return (1);
}

int ft_set_flags_space(t_flags *flags)
{
    flags->flags_space = 1;
    return (1);
}

int ft_set_flags_sign(t_flags *flags)
{
    flags->flags_sign = 1;
    return (1);
}

int ft_set_flags_hash(t_flags *flags)
{
    flags->flags_hash = 1;
    return (1);
}

// int ft_set_flags_width(const char *format, va_list args, t_flags *flags)
// {
//     int i;

//     i = 0;
//     if (format[i] == '*')
//     {
//         flags->width = va_arg(args, int);
//         if (flags->width < 0)
//         {
//             flags->flags_minus = 1;
//             flags->width *= -1;
//         }
//         return (1);
//     }
//     else if (ft_isdigit(format[i]))
//     {
//         flags->width = ft_atoi(format + i);
//         while (ft_isdigit(format[i]))
//             i++;
//         return (i);
//     }
//     return (0);
// }

// int ft_set_precision(const char *format, va_list args, t_flags *flags)
// {
//     int i;

//     i = 0;
//     if (format[i] == '*')
//     {
//         flags->precision = va_arg(args, int);
//         if (flags->precision < 0)
//             flags->dot = 0;
//         return (1);
//     }
//     else if (ft_isdigit(format[i]))
//     {
//         flags->precision = ft_atoi(format + i);
//         while (ft_isdigit(format[i]))
//             i++;
//         return (i);
//     }
//     return (0);
// }

int ft_set_flags_type(const char *format, t_flags *flags, int flags_count)
{
    char *type;

    type = "cspdiuxX";
    if (ft_memset((void *)type
        , (int)format[flags_count]
        , sizeof(char) * ft_strlen(type)))
        flags->type = format[flags_count];
    else
        return (0);
    return (1);
}