/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 17:38:53 by lanton-m          #+#    #+#             */
/*   Updated: 2025/03/08 17:38:53 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(char const *str, ...)
{

    va_list args;
    int i;
    char const  *holder;

    holder = str;
    va_start (args, str);

    if (!str)
        return (NULL);
    while (str[i])
    {
        if (str[i] == '%' && str[i + 1] != '%')
        {
            i++;
            str + i;
            ft_case(str, args);
            str = holder;
        }
        else
            ft_putchar_fd(str[i], 1);
        str++;
    }
    va_end (args);
}