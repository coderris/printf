/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 20:12:02 by lanton-m          #+#    #+#             */
/*   Updated: 2025/03/10 20:12:02 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int a = ft_printf(" %p ", -1);
    int b = printf(" %p ", -1);

    if (a == b)
        printf("YES");
    else
        printf("NO %i %i",a,b);
    return (0);
}
