/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prtchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntthrk-ch <ntthrk-ch@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:43:24 by ncheepan          #+#    #+#             */
/*   Updated: 2023/06/29 22:58:11 by ntthrk-ch        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_prtchr(char c)
{
	int	len_char;
	
	len_char = 0;
	ft_putchar(c, sizeof(char));
	return (1);
}
