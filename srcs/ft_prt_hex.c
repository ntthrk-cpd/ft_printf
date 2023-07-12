/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prt_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:29:34 by ncheepan          #+#    #+#             */
/*   Updated: 2023/07/12 14:46:26 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int     ft_put_digit(unsigned int digit, char x)
{
        if (digit <= 9)
                ft_putchar(digit + 48, sizeof(char));
        else if (x == 'X')
                ft_putchar(digit + 55, sizeof(char));
        else if (x == 'x')
                ft_putchar(digit + 87, sizeof(char));
        return (1);
}

int     ft_prt_hex(unsigned int num_hex, char x)
{
        int     len_hex;
        unsigned int digit;

        len_hex = 0;
        digit = num_hex % 0x10;
        if (num_hex >= 0x10)
                ft_prthex(num_hex, x);
        len_hex += ft_put_digit(digit, x);
        return (len_hex);
}

// int     ft_prthex(unsigned int num_hex, char x)
// {
//         int     len_hex;
//         unsigned int digit;

//         len_hex = 0;
//         digit = num_hex / 0x10;
//         if (num_hex >= 0x10)
//                 ft_prthex(digit, x);
//         len_hex += ft_put_digit(num_hex % 0x10, x);
//         return (len_hex);
// }

// int     ft_prt_hex_width(int width, int minus, int zero)
// {
//         int     printf_count;

//         printf_count = 0;
//         while (width > 0)
//         {
//                 if (minus == 1)
//                         printf_count += ft_prtchr(' ');
//                 else if (zero == 1)
//                         printf_count += ft_prtchr('0');
//                 else
//                         printf_count += ft_prtchr(' ');
//                 width--;
//         }
//         return (printf_count);
// }

// int     ft_prt_hex_precision(int precision, int len_hex)
// {
//         int     printf_count;

//         printf_count = 0;
//         while (precision > len_hex)
//         {
//                 printf_count += ft_prtchr('0');
//                 precision--;
//         }
//         return (printf_count);
// }

// int     ft_prt_hex_minus(int width, int precision, int len_hex, unsigned int num_hex, char x)
// {
//         int     printf_count;

//         printf_count = 0;
//         printf_count += ft_prt_hex_precision(precision, len_hex);
//         printf_count += ft_prt_hex(num_hex, x);
//         printf_count += ft_prt_hex_width(width - precision, 1, 0);
//         return (printf_count);
// }

// int     ft_prt_hex_no_minus(int width, int precision, int len_hex, unsigned int num_hex, char x)
// {
//         int     printf_count;

//         printf_count = 0;
//         if (precision >= 0)
//                 printf_count += ft_prt_hex_width(width - precision, 0, 0);
//         else
//                 printf_count += ft_prt_hex_width(width - len_hex, 0, 0);
//         printf_count += ft_prt_hex_precision(precision, len_hex);
//         printf_count += ft_prt_hex(num_hex, x);
//         return (printf_count);
// }

// int     ft_prt_hex_zero(int width, int precision, int len_hex, unsigned int num_hex, char x)
// {
//         int     printf_count;

//         printf_count = 0;
//         if (precision >= 0)
//                 printf_count += ft_prt_hex_width(width - precision, 0, 0);
//         else
//                 printf_count += ft_prt_hex_width(width - len_hex, 0, 1);
//         printf_count += ft_prt_hex_precision(precision, len_hex);
//         printf_count += ft_prt_hex(num_hex, x);
//         return (printf_count);
// }

// int     ft_prt_hex_zero_minus(int width, int precision, int len_hex, unsigned int num_hex, char x)
// {
//         int     printf_count;

//         printf_count = 0;
//         printf_count += ft_prt_hex_precision(precision, len_hex);
//         printf_count += ft_prt_hex(num_hex, x);
//         printf_count += ft_prt_hex_width(width - precision, 1, 0);
//         return (printf_count);
// }

// int     ft_prt_hex_zero_no_minus(int width, int precision, int len_hex, unsigned int num_hex, char x)
// {
//         int     printf_count;

//         printf_count = 0;
//         printf_count += ft_prt_hex_width(width - precision, 0, 1);
//         printf_count += ft_prt_hex_precision(precision, len_hex);
//         printf_count += ft_prt_hex(num_hex, x);
//         return (printf_count);
// }

// int     ft_prt_hex_zero_zero(int width, int precision, int len_hex, unsigned int num_hex, char x)
// {
//         int     printf_count;

//         printf_count = 0;
//         printf_count += ft_prt_hex_width(width - len_hex, 0, 1);
//         printf_count += ft_prt_hex_precision(precision, len_hex);
//         printf_count += ft_prt_hex(num_hex, x);
//         return (printf_count);
// }

