/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_times_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 18:39:45 by lanton-m          #+#    #+#             */
/*   Updated: 2025/03/16 18:39:45 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_times_hex(uintptr_t c)
{
    int i;

    i = 3;
    while (c >= 16)
    {
        c = c / 16;
        i++;
    }

    return i;
}