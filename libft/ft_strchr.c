/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:36:41 by ncheepan          #+#    #+#             */
/*   Updated: 2023/07/10 17:20:22 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == (unsigned char)c)
			return ((char *)(str + index));
		index++;
	}
	if (c == '\0')
		return ((char *)str + index);
	return (NULL);
}
