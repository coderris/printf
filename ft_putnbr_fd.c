/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 18:42:16 by lanton-m          #+#    #+#             */
/*   Updated: 2024/10/06 20:41:19 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char    *new_n;
    int size;
    int i;

    i = 0;
    new_n = ft_itoa(n);
    size = ft_strlen(new_n);
    while (i < size)
    {
        write(fd, &new_n[i], 1);
        i++;
    }
}
