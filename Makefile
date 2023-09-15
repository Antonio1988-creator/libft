# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 12:19:17 by anguil-l          #+#    #+#              #
#    Updated: 2023/09/15 15:50:38 by anguil-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del programa
NAME = libft.a

# Flags de compilación
FLAGS = -Wall -Wextra -Werror

# Directorios
SRC_DIR = srcs
OBJ_DIR = obj
INC_DIR = includes

# Lista de archivos fuente
SRC_FILES = ft_atoi.c ft_isalpha.c ft_isprint.c ft_memset.c ft_strlen.c ft_tolower.c \
            ft_bzero.c ft_isascii.c ft_memcpy.c ft_strlcat.c ft_strncmp.c ft_toupper.c \
            ft_isalnum.c ft_isdigit.c ft_memmove.c ft_strlcpy.c ft_strnstr.c

# Construye la lista de objetos a partir de la lista de archivos fuente
OBJ_FILES = $(SRC_FILES:.c=.o)

# Agrega los directorios a las rutas de búsqueda
vpath %.c $(SRC_DIR)
vpath %.o $(OBJ_DIR)

# Rutas completas
SRC = $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJ = $(addprefix $(OBJ_DIR)/, $(OBJ_FILES))

# Se compilan los archivos objetos.
all: obj $(NAME)

# Crea la carpeta donde estarán los objetos.
obj:
	mkdir -p $(OBJ_DIR)

# Regla para compilar archivos objetos desde archivos fuente
$(OBJ_DIR)/%.o: %.c
	gcc $(FLAGS) -I $(INC_DIR) -o $@ -c $<

# Se compilan los objetos en la biblioteca estática libft.a
$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	@echo "(•̀ᴗ•́)و $(NAME) generado!"

# Remueve todos los archivos objetos y la biblioteca estática
clean:
	rm -rf $(OBJ_DIR)
	@echo "¯\_(ツ)_/¯ Objectos removidos!"

# Remueve todos los archivos objetos, binarios y la biblioteca estática
fclean: clean
	rm -f $(NAME)
	@echo "(╯°□°）╯︵ ┻━┻ $(NAME) removido!"

# Hace un re-make (como si se hubiera ejecutado Make por primera vez)
re: fclean all

# Le dice al make que estos nombres no son archivos
.PHONY: all clean fclean re

