/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 12:26:37 by lanton-m          #+#    #+#             */
/*   Updated: 2025/03/26 12:26:37 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char *ft_fillhex(int n)
{
    int     i;
    char    *ptr;

    i = 0;
    ptr = malloc(17 * sizeof(char));
    while (i < 17)
    {
        if (i <= 9)
        {    
            ptr[i] = '0' + i;
            i++;
        }
        else
        {
            if (n == 1)
                ptr[i] = 'a' + i - 10;
            else
                ptr[i] = 'A' + i - 10;
            i++;
        }
    }
    return (ptr);
}

void ft_putnbr_hex_fd(uintptr_t c, int fd, int i)
{
    char    *hexadigits;

    hexadigits = ft_fillhex(i);
    if (c >= 16)
        ft_putnbr_hex_fd(c / 16, fd, i);
    ft_putchar_fd(hexadigits[c % 16],fd);
    free (hexadigits);
}