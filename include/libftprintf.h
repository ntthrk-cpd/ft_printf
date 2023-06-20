/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 10:21:45 by ncheepan          #+#    #+#             */
/*   Updated: 2023/06/20 16:52:59 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "./libft.h"
# include <stdarg.h>

typedef struct	t_flags
{
	int	specifier;	
	int	left;
	int	minus;
	int	space;
	int	hash;
	int	zero;
	int	width;
	int	precision;
} t_flags;

int     ft_printf(const char *format, ...);

#endif
