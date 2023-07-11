/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prt_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:18:20 by ncheepan          #+#    #+#             */
/*   Updated: 2023/07/10 17:19:02 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_prt_unsigned(unsigned int n)
{
	int	len_unsign;
	int	digit;
	
	digit = n % 10;
	len_unsign = 0;
	if (n > 9)
		len_unsign += (n / 10);
	ft_putnbr_fd(digit, sizeof(int));
	return (len_unsign);
}
