# Nombre de la librería
NAME = libft.a

# Compilador y flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Archivos fuente y sus correspondientes archivos objeto
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

# Archivo de cabecera
HEADER = libft.h

# Regla principal (crear la librería)
all: $(NAME)

# Crear la librería estática
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Regla para compilar los archivos objeto
%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

# Limpiar archivos objeto
clean:
	rm -f $(OBJS)

# Limpiar todo (archivos objeto y librería)
fclean: clean
	rm -f $(NAME)


# Reconstruir todo desde cero
re: fclean all

# Evita que Make interprete estos nombres como archivos o directorios
.PHONY: all clean fclean re
