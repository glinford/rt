# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jquilez <jquilez@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 12:50:13 by jquilez           #+#    #+#              #
#    Updated: 2014/02/19 14:03:58 by glinford         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#General
CC			= gcc
CFLAGS 		= -Wall -Werror -Wextra

#Files
NAME 		= libft.a
SRC 		= ft_bzero.c
SRC 		+= ft_memccpy.c
SRC 		+= ft_memcpy.c
SRC 		+= ft_memmove.c
SRC 		+= ft_memset.c
SRC 		+= ft_strcpy.c
SRC 		+= ft_strlen.c
SRC 		+= ft_memchr.c
SRC 		+= ft_memcmp.c
SRC 		+= ft_strcat.c
SRC 		+= ft_strdup.c
SRC 		+= ft_strncat.c
SRC 		+= ft_strncpy.c
SRC 		+= ft_strchr.c
SRC 		+= ft_strrchr.c
SRC 		+= ft_strlcat.c
SRC 		+= ft_strstr.c
SRC 		+= ft_strnstr.c
SRC 		+= ft_strcmp.c
SRC 		+= ft_strncmp.c
SRC 		+= ft_atoi.c
SRC 		+= ft_isalpha.c
SRC 		+= ft_isdigit.c
SRC 		+= ft_isalnum.c
SRC 		+= ft_isascii.c
SRC 		+= ft_isprint.c
SRC 		+= ft_toupper.c
SRC 		+= ft_tolower.c
SRC 		+= ft_putchar.c
SRC 		+= ft_putstr.c
SRC 		+= ft_putnbr.c
SRC 		+= ft_putendl.c
SRC 		+= ft_putchar_fd.c
SRC 		+= ft_putstr_fd.c
SRC 		+= ft_putendl_fd.c
SRC 		+= ft_putnbr_fd.c
SRC 		+= ft_itoa.c
SRC 		+= ft_strsplit.c
SRC 		+= ft_strtrim.c
SRC 		+= ft_strjoin.c
SRC 		+= ft_strsub.c
SRC 		+= ft_strnequ.c
SRC 		+= ft_strequ.c
SRC 		+= ft_strmapi.c
SRC 		+= ft_strmap.c
SRC 		+= ft_strclr.c
SRC 		+= ft_strnew.c
SRC 		+= ft_striteri.c
SRC 		+= ft_striter.c
SRC 		+= ft_strdel.c
SRC 		+= ft_memdel.c
SRC 		+= ft_memalloc.c
SRC 		+= ft_lstnew.c
SRC 		+= ft_lstdelone.c
SRC 		+= ft_lstdel.c
SRC 		+= ft_lstadd.c
SRC 		+= ft_lstiter.c
SRC 		+= ft_lstmap.c
SRC			+= get_next_line.c
SRC			+= ft_tabdel.c
SRC			+= ft_fabs.c
SRC			+= ft_tablen.c
SRC			+= ft_intlen.c
SRC			+= ft_ltoa.c
SRC			+= ft_longlen.c
SRC			+= ft_puthexa.c
SRC			+= ft_putoctal.c
SRC			+= ft_putptr.c
SRC			+= ft_putstr_red.c
SRC			+= ft_putstr_blue.c
SRC			+= ft_putstr_green.c
SRC			+= ft_bintoint.c
SRC			+= ft_intobin.c
OBJET		= $(subst .c,.o,$(SRC))

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

all: $(NAME)

$(NAME): $(OBJET)
	ar rc $(NAME) $(OBJET)
	ranlib $(NAME)

.PHONY: clean fclean re

clean:
	/bin/rm -f $(OBJET)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
