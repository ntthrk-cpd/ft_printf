/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntthrk-ch <ntthrk-ch@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 00:48:13 by ncheepan          #+#    #+#             */
/*   Updated: 2023/06/23 20:18:23 by ntthrk-ch        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	size_str;

	size_str = 0;
	while (*str++)
		size_str++;
	return (size_str);
}
