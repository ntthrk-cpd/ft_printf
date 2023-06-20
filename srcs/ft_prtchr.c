/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 18:12:28 by ncheepan          #+#    #+#             */
/*   Updated: 2023/06/20 19:03:06 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_prtchr(char c)
{
	int	len_char;
	
	len_char = 0;
	len_char += ft_putchar(c, sizeof(char));
	return len_char;
}
