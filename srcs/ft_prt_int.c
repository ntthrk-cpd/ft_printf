/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prt_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:06:05 by ncheepan          #+#    #+#             */
/*   Updated: 2023/07/12 14:51:06 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_prt_int(int num)
{
	int	len_num;
	
	len_num = 0;
	len_num = ft_strlen(ft_itoa(num));
	ft_putnbr_fd(num, len_num);
	return (len_num);
}

