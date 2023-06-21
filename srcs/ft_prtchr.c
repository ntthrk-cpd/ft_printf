/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prtchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:43:24 by ncheepan          #+#    #+#             */
/*   Updated: 2023/06/21 14:43:34 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_prtchr(char c)
{
	int	len_char;
	
	len_char = 0;
	len_char += ft_putchar(c, sizeof(char));
	return len_char;
}
