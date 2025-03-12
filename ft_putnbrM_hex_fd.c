/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrM_hex_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 13:04:27 by lanton-m          #+#    #+#             */
/*   Updated: 2025/03/12 13:04:27 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putnbrM_hex_fd(uintptr_t c, int fd)
{
    char    hexadigits[17] = "0123456789ABCDEF";

    if (c >= 16)
        ft_putnbr_hex_fd(c / 16, fd);
    ft_putchar_fd(hexadigits[c % 16],fd);
}