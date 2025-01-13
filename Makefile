# Nombre del ejecutable de tu tester
NAME = tester

# Compilador y flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Archivo fuente del tester
SRC = tester.c

# Directorio de la librería y el archivo de cabecera
LIB_DIR = ./libreria
LIB_NAME = libft.a
HEADER = libft.h

# Rutas completas para la librería y el encabezado
LIB_PATH = $(LIB_DIR)/$(LIB_NAME)
HEADER_PATH = $(LIB_DIR)/$(HEADER)

# Regla principal
all: $(NAME)

# Regla para compilar el tester con la librería
$(NAME): $(SRC) $(LIB_PATH) $(HEADER_PATH)
	$(CC) $(CFLAGS) $(SRC) -I$(LIB_DIR) -L$(LIB_DIR) -lft -o $(NAME)

# Limpieza del ejecutable
clean:
	rm -f $(NAME)

fclean: clean

# Reconstruir todo desde cero
re: clean all

# Evita que Make interprete estas reglas como nombres de archivos
.PHONY: all clean re