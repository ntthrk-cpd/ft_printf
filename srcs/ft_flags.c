/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:37:03 by ncheepan          #+#    #+#             */
/*   Updated: 2023/07/11 16:28:13 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_flags(const char *format, int i, t_flags *flags)
{
    while (format[i] == '-' || format[i] == '0')
    {
        if (format[i] == '-')
            flags->minus = 1;
        else if (format[i] == '0')
            flags->zero = 1;
        i++;
    }
    return (i);
}

//check csdiuxXp

//check flags

//check width

//