/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prtchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:43:24 by ncheepan          #+#    #+#             */
/*   Updated: 2023/07/10 17:19:04 by ncheepan         ###   ########.fr       */
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
