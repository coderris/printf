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
    int counter;
    char const  *holder;

    i = 0;
    counter = 0;
    holder = str;
    va_start (args, str);

    if (!str)
        return (-1);
    while (str[i])
    {
        if (str[i] == '%')
        {
            i++;
            if (str[i] == '%')
            {
                ft_putchar_fd('%',1);
                i++;
                counter += 2;
            }
            else
            {
                str = str + i;
                counter += ft_case(str, args) - 1;
                str = holder;
            }
        }
        else
            ft_putchar_fd(str[i], 1);
        i++;
        counter++;
    }
    va_end (args);
    return (counter);
}
