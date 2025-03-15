/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 19:32:43 by lanton-m          #+#    #+#             */
/*   Updated: 2025/03/10 19:32:43 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_case(char const *str, va_list args)
{
    void    *ptr;
    uintptr_t   ptr_numb;

    if (*str == 'c')
        ft_putchar_fd(va_arg(args, int), 1);
    else if (*str == 's')
        ft_putendl_fd(va_arg(args, char *), 1);
    else if (*str == 'p')
    {
        ptr = va_arg(args, void *);
        ptr_numb = (uintptr_t)ptr;
        ft_putchar_fd('0',1);
        ft_putchar_fd('x',1);
        ft_putnbr_hex_fd(ptr_numb,1);
    }
    else if (*str == 'd' || *str == 'i')
        ft_putnbr_fd(va_arg(args, int),1);
    else if (*str == 'u')
        ft_putendl_fd(ft_itoa(va_arg(args, unsigned int)),1);
    else if (*str == 'x')
        ft_putnbr_hex_fd(va_arg(args, unsigned int),1);
    else if (*str == 'X')
        ft_putnbrM_hex_fd(va_arg(args, unsigned int),1);
    else 
        ft_putchar_fd('%', 1);
}