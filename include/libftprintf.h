/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntthrk-ch <ntthrk-ch@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 10:21:45 by ncheepan          #+#    #+#             */
/*   Updated: 2023/06/23 12:07:58 by ntthrk-ch        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "./libft.h"
# include <stdarg.h>

int     ft_printf(const char *format, ...);
int     ft_prtchr(char c);
int     ft_prtstr(char *str);
int     ft_prt_int(int num);
int     ft_prt_unsigned(unsigned int n);
int     ft_prthex(unsigned int num_hex, char x);

#endif
