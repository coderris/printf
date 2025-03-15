# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/08 17:35:20 by lanton-m          #+#    #+#              #
#    Updated: 2025/03/08 17:35:20 by lanton-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre de la librería final
NAME = libftprintf.a
program: 
	cc program.c -L./ -lftprintf -L./libft -lft
# Compilador y flags
CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(LIBFT_DIR)

# Directorios
LIBFT_DIR = ./libft
PRINTF_DIR = .

# Archivos fuente
SRCS = $(PRINTF_DIR)/ft_printf.c $(PRINTF_DIR)/ft_case.c $(PRINTF_DIR)/ft_putnbr_hex_fd.c \
$(PRINTF_DIR)/ft_putnbrM_hex_fd.c

# Archivos objeto
OBJ = $(SRCS:.c=.o)

# Incluir la librería libft
LIBFT = $(LIBFT_DIR)/libft.a

# Regla para compilar la librería libft
$(LIBFT):
	make -C $(LIBFT_DIR)

# Regla para compilar los archivos .c a .o
%.o: $(PRINTF_DIR)/%.c $(PRINTF_DIR)/ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

# Regla para crear la librería libftprintf.a
$(NAME): $(OBJ) $(LIBFT)
	ar rcs $(NAME) $(OBJ) $(LIBFT)

# Limpiar objetos generados
clean:
	rm -f $(OBJ)
	make -C $(LIBFT_DIR) clean

# Limpiar completamente (objetos y la librería)

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

# Recompilar todo desde cero
re: fclean all

# Regla por defecto
all: $(NAME)

.PHONY: clean fclean re all

