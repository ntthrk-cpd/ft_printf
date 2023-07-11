/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 10:21:45 by ncheepan          #+#    #+#             */
/*   Updated: 2023/07/11 17:30:29 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft.h"
# include <stdarg.h>

/*---------------------- FLAGS ----------------------*/
typedef struct s_flags
{
    int flags_minus;
    int flags_sign;
    int flags_zero;
    int flags_space;
    int flags_hash;
    int width;
    int dot;
    int precision;
    char type;
}   t_flags;

t_flags *ft_init_flags(t_flags *flags);
int     ft_set_flags(const char *format, va_list args, t_flags *flags);
int     ft_set_flags_minus(t_flags *flags);
int     ft_set_flags_sign(t_flags *flags);
int     ft_set_flags_zero(t_flags *flags);
int     ft_set_flags_space(t_flags *flags);
int     ft_set_flags_hash(t_flags *flags);
int     ft_set_flags_width(const char *format, va_list args, t_flags *flags);
int     ft_set_flags_precision(const char *format, va_list args, t_flags *flags);
int     ft_set_flags_type(const char *format, t_flags *flags, int flags_count);
/*---------------------- UTILS ----------------------*/
/*------------------------- FUNCTION  ---------------------------*/
// main function
int     ft_printf(const char *format, ...);
int     ft_parse_flags(const char *format, va_list args);

// charcter function
int     ft_prtchr(char c);
// string function  
int     ft_prtstr(char *str);
// integer, decimal function
int     ft_prt_int(int num);
// unsigned integer function
int     ft_prt_unsigned(unsigned int n);
// hex function
int     ft_prt_hex(unsigned int num_hex, char x);
// pointer function
int ft_prt_pointer(void *p);
#endif
