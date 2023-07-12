/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prt_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:29:55 by ncheepan          #+#    #+#             */
/*   Updated: 2023/07/12 14:41:49 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_prt_pointer(void *p)
{
    int len;

    len = 0;
    len += ft_prtchr('0');
    len += ft_prtchr('x');
    len += ft_prt_hex((unsigned long long)p, 0);        
    return (len);
}