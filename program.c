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
    int a = ft_printf(" %p %p ", 0, 0);
    printf("\n");
    int b = printf(" %p %p ", 0, 0);
    printf("\n");
    if (a == b)
    {
        printf("YES \n");
        printf("%i %i\n",a,b);
    }
    else
        printf("NO %i %i\n",a,b);
    return (0);
}
