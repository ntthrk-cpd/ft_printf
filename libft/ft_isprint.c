/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:06:46 by ncheepan          #+#    #+#             */
/*   Updated: 2023/07/10 17:19:59 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include        "libft.h"

int	ft_isprint(int ch)
{
	if (ch > 31 && ch < 127)
		return (1);
	return (0);
}
