/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prtstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:02:13 by ncheepan          #+#    #+#             */
/*   Updated: 2023/06/22 11:55:09 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftprintf.h"

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

