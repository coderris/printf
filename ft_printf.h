/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 17:35:25 by lanton-m          #+#    #+#             */
/*   Updated: 2025/03/08 17:35:25 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <limits.h>
# include "libft/libft.h"

int ft_printf(char const *format, ...);
int ft_case(char const *str, va_list args);
int ft_times_hex(uintptr_t c);
void ft_putnbr_hex_fd(uintptr_t c, int fd);
void ft_putnbrm_hex_fd(uintptr_t c, int fd);

#endif
