/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:06:46 by ncheepan          #+#    #+#             */
/*   Updated: 2023/04/18 21:52:32 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include        "libft.h"

int	ft_isprint(int ch)
{
	if (ch > 31 && ch < 127)
		return (1);
	return (0);
}
