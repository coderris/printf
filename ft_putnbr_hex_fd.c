/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 19:33:23 by lanton-m          #+#    #+#             */
/*   Updated: 2025/03/10 19:33:23 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putnbr_hex_fd(uintptr_t c, int fd)
{
    char    hexadigits[17] = "0123456789abcdef";

    if (c >= 16)
        ft_putnbr_hex_fd(c / 16, fd);
    ft_putchar_fd(hexadigits[c % 16],fd);
}