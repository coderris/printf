/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 19:31:07 by lanton-m          #+#    #+#             */
/*   Updated: 2025/03/10 19:31:07 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(char const *str, ...)
{

    va_list args;
    int i;
    char const  *holder;

    i = 0;
    holder = str;
    va_start (args, str);

    if (!str)
        return ('\0');
    while (str[i])
    {
        if (str[i] == '%')
        {
            i++;
            str = str + i;
            ft_case(str, args);
            ft_putchar_fd(str, 1);
            str = holder;
        }
        else
            ft_putchar_fd(str[i], 1);
        i++;;
    }
    va_end (args);
    return (1);
}