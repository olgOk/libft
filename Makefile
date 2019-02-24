# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vokrut <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/20 19:12:23 by vokrut            #+#    #+#              #
#    Updated: 2019/02/20 19:39:27 by vokrut           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_islower.c ft_lstdelone.c ft_memcpy.c ft_putnbr.c ft_strcpy.c ft_strlen.c 
SRC += ft_strnstr.c ft_isprint.c ft_lstiter.c ft_memdel.c ft_putnbr_fd.c ft_strdel.c 
SRC += ft_strmap.c ft_strrchr.c ft_atoi.c ft_isspace.c ft_lstmap.c ft_memmove.c 
SRC += ft_putstr.c ft_strdup.c ft_strmapi.c ft_strsplit.c ft_bzero.c ft_isupper.c 
SRC += ft_lstnew.c ft_memset.c ft_putstr_fd.c ft_strequ.c ft_strncat.c ft_strstr.c
SRC += ft_isalnum.c ft_itoa.c ft_memalloc.c ft_putchar.c ft_strcat.c ft_striter.c
SRC += ft_strncmp.c ft_strsub.c ft_isalpha.c ft_list_size.c ft_memccpy.c ft_putchar_fd.c
SRC += ft_strchr.c ft_striteri.c ft_strncpy.c ft_strtrim.c ft_isascii.c ft_lstadd.c 
SRC += ft_memchr.c ft_putendl.c ft_strclr.c ft_strjoin.c ft_strnequ.c ft_tolower.c
SRC += ft_isdigit.c ft_lstdel.c ft_memcmp.c ft_putendl_fd.c ft_strcmp.c ft_strlcat.c
SRC += ft_strnew.c ft_toupper.c

OBJ = ft_islower.o ft_lstdelone.o ft_memcpy.o ft_putnbr.o ft_strcpy.o ft_strlen.o
OBJ += ft_strnstr.o ft_isprint.o ft_lstiter.o ft_memdel.o ft_putnbr_fd.o ft_strdel.o
OBJ += ft_strmap.o ft_strrchr.o ft_atoi.o ft_isspace.o ft_lstmap.o ft_memmove.o
OBJ += ft_putstr.o ft_strdup.o ft_strmapi.o ft_strsplit.o ft_bzero.o ft_isupper.o
OBJ += ft_lstnew.o ft_memset.o ft_putstr_fd.o ft_strequ.o ft_strncat.o ft_strstr.o
OBJ += ft_isalnum.o ft_itoa.o ft_memalloc.o ft_putchar.o ft_strcat.o ft_striter.o
OBJ += ft_strncmp.o ft_strsub.o ft_isalpha.o ft_list_size.o ft_memccpy.o ft_putchar_fd.o
OBJ += ft_strchr.o ft_striteri.o ft_strncpy.o ft_strtrim.o ft_isascii.o ft_lstadd.o
OBJ += ft_memchr.o ft_putendl.o ft_strclr.o ft_strjoin.o ft_strnequ.o ft_tolower.o
OBJ += ft_isdigit.o ft_lstdel.o ft_memcmp.o ft_putendl_fd.o ft_strcmp.o ft_strlcat.o
OBJ += ft_strnew.o ft_toupper.o

INCLUDES = ./

$(NAME): $(SRC) libft.h
		$(CC) $(CLFAGS) -I $(INCLUDES) -c $(SRC) 
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

all: $(NAME)		

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
