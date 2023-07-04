/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prtstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntthrk-ch <ntthrk-ch@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:02:13 by ncheepan          #+#    #+#             */
/*   Updated: 2023/06/29 22:58:09 by ntthrk-ch        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int     ft_prtstr(char *str)
{
        int     len_str;

        len_str = 0;
        if (str == NULL)
        {
                #ifdef __linux__
                        str = "(null)";
                #elif __APPLE__
                        str = "\0";
                #endif
        }
        len_str = ft_strlen(str);
        ft_putstr_fd(str, len_str);
        return len_str;
}

