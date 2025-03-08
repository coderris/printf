/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 19:07:32 by lanton-m          #+#    #+#             */
/*   Updated: 2025/03/08 19:07:32 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

void ft_putendl_fd(char *s, int fd)
{
    size_t  i;

    i = 0;
    if (!s)
        return;
    while(s[i] != '\0')
    {
        write(fd, &s[i], 1);
        i++;
    }
    write(fd, "\n", 1);
}

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

int ft_printfa(char const *str, ...)
{
    va_list args;
    int i;
    char const  *holder;

    holder = str;
    va_start (args, str);
    i = 0;

    if (!str)
        return ('\0');
    while (str[i])
    {
        if (str[i] == '%' && str[i + 1] != '%')
        {
            i++;
            printf("%c",va_arg(args, int));
            str = holder;
        }
        else
            ft_putchar_fd(str[i], 1);
        i++;
    }
    va_end (args);
}

int main(void)
{
    ft_printfa("Hola mam %c", 'a');
    return (0);
}