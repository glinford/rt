# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glinford <glinford@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/02/19 13:51:06 by glinford          #+#    #+#              #
#    Updated: 2014/03/19 11:29:27 by jquilez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#General
CC					= clang
CFLAGS				= -Wall -Werror -Wextra -O3

#Files
NAME				= rt
SRC					= $(DIR_SRC)/main.c
SRC					+= $(DIR_SRC)/ft_error.c
SRC					+= $(DIR_SRC)/ft_init.c
SRC					+= $(DIR_SRC)/ft_listadd.c
SRC					+= $(DIR_SRC)/ft_listnew.c
SRC					+= $(DIR_SRC)/ft_parse.c
SRC					+= $(DIR_SRC)/ft_parse2.c
SRC					+= $(DIR_SRC)/ft_parse_map.c
SRC					+= $(DIR_SRC)/ft_pixel_put_img.c
SRC					+= $(DIR_SRC)/ft_scene.c
SRC					+= $(DIR_SRC)/ft_load.c
SRC					+= $(DIR_SRC)/ft_get_light.c
SRC					+= $(DIR_SRC)/ft_get_shadow.c
SRC					+= $(DIR_SRC)/ft_utils.c
SRC					+= $(DIR_SRC)/ft_sphere.c
SRC					+= $(DIR_SRC)/ft_plane.c
SRC					+= $(DIR_SRC)/ft_calc_cam.c
SRC					+= $(DIR_SRC)/ft_split.c
SRC					+= $(DIR_SRC)/ft_quadra.c
INCS				= -I ./inc/ -I ./libft/inc/ -I /usr/X11/include/X11
LIBS				= -L ./libft/ -lft -L /usr/X11/lib/ -lmlx -lXext -lX11
DIR_SRC				= src
DIR_INC				= includes
DIR_OBJ				= .obj
DIR_LIST			= src
OBJ					= $(addprefix $(DIR_OBJ)/, $(SRC:.c=.o))

# ---------------------------------------------------------------------------- #

.SILENT:

all: libft $(NAME)

libft:
	$(MAKE) -C libft

$(addprefix $(DIR_OBJ)/, %.o): %.c $(DIR_INC)
	printf "compiling \e[33m%-41s\e[0m" "$@..."
	$(CC) $(CFLAGS) $(INCS) -o $@ -c $<
	printf "\e[32m[✔]\e[0m\n"

$(NAME): $(DIR_OBJ) $(OBJ) ./libft/
	printf "\e[32m------------------------------------------------------\e[0m\n"
	printf "\e[34m%-51s\e[0m" "$@"
	$(CC) $(CFLAGS) $(OBJ) $(LIBS) -o $(NAME)
	printf "\e[32m[✔]\e[0m\n"
	printf "\e[32m------------------------------------------------------\e[0m\n"

$(DIR_OBJ) :
	/bin/mkdir $(DIR_OBJ); \
	for DIR in $(DIR_LIST); \
	do \
	/bin/mkdir $(DIR_OBJ)/$$DIR; \
	done \

clean:
	$(MAKE) -C libft $@
	/bin/rm -rf $(DIR_OBJ);
	printf "\e[32m[✔]\e[0m Project cleaned.\n"

fclean: clean
	$(MAKE) -C libft $@
	/bin/rm -rf $(NAME);
	printf "\e[32m[✔]\e[0m Project fcleaned.\n"

re: fclean all

.PHONY: clean fclean re debug libft
