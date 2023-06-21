/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prt_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:29:34 by ncheepan          #+#    #+#             */
/*   Updated: 2023/06/21 23:47:56 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_put_digit(unsigned int digit, char x)
{
        if (digit <= 9)
                ft_putchar(digit + 48, sizeof(char));
        else if (x == 'X')
                ft_putchar(digit + 55, sizeof(char));
        else if (x == 'x')
                ft_putchar(digit + 87, sizeof(char));
        return (1);
}

int     ft_prthex(unsigned int num_hex, char x)
{
        int     len_hex;
        unsigned int digit;

        len_hex = 0;
        digit = num_hex % 0x10;
        if (num_hex >= 0x10)
                ft_prthex(num_hex, x);
        len_hex += ft_put_digit(digit, x);
        return (len_hex);
}

