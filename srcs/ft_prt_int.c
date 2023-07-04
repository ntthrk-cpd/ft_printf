/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prt_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntthrk-ch <ntthrk-ch@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:06:05 by ncheepan          #+#    #+#             */
/*   Updated: 2023/06/29 22:58:18 by ntthrk-ch        ###   ########.fr       */
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
