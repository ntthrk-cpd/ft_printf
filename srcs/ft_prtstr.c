/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prtstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:02:13 by ncheepan          #+#    #+#             */
/*   Updated: 2023/07/12 15:08:19 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int     ft_prtstr(char *str)
{
        int     len_str;

        len_str = 0;
        if (str == NULL)
                str = (char *)PRINT_NULL;
        len_str = ft_strlen(str);
        ft_putstr_fd(str, len_str);
        return len_str;
}

