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

# 💻 Variables del compilador
CC      := cc
CFLAGS  := -Wall -Wextra -Werror
AR      := ar rcs

# 📌 Nombre de la biblioteca final
NAME    := libftprintf.a

# 📂 Directorio de libft
LIBFT_DIR  := libft
LIBFT      := $(LIBFT_DIR)/libft.a

# 🔍 Archivos fuente de ft_printf
SRC     := ft_printf.c ft_case.c ft_xcase.c ft_idcase.c ft_pcase.c \
			ft_scase.c ft_times_hex.c ft_ucase.c ft_putnbr_hex_fd.c
OBJ     := $(SRC:.c=.o)

# 🏗️ Regla principal: generar libftprintf.a
all: $(LIBFT) $(NAME)

# 🔹 Compilar libft primero dentro de su carpeta
$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

# 🔹 Extraer los .o de libft.a y unirlos con ft_printf
$(NAME): $(OBJ) $(LIBFT)
	@rm -f $(NAME)  # Borra cualquier versión anterior
	@mkdir -p temp_libft_objs  # Crea carpeta temporal para objetos de libft
	@cd temp_libft_objs && ar x ../$(LIBFT)  # Extrae los objetos de libft.a
	$(AR) $(NAME) $(OBJ) temp_libft_objs/*.o  # Une todos los objetos en libftprintf.a
	@rm -rf temp_libft_objs  # Elimina los objetos temporales
	@echo "✅ $(NAME) creado correctamente"

# 🛠️ Compilación de archivos objeto
%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

# 🗑️ Limpiar archivos objeto de ft_printf
clean:
	@$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJ)

# 🗑️ Limpiar todo, incluyendo libftprintf.a
fclean: clean
	@$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

# 🔄 Recompilar todo desde cero
re: fclean all

# 📌 Evitar conflictos con nombres de archivos
.PHONY: all clean fclean re
