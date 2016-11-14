# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/09 09:15:18 by vlistrat          #+#    #+#              #
#    Updated: 2016/11/14 17:16:19 by vlistrat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol

SRCS_PATH = ./srcs/

LIBFT_PATH = ./libft/

MLX_PATH = ./minilibx_macos/

INC_PATH = ./includes/

SRCS_NAME = main.c check_args.c ft_fractol_err.c ft_calc.c ft_key.c ft_expose.c \
			new_image.c ft_mouse.c put_pixel.c ft_exit.c check_fract.c \
			ft_mandelbrot.c ft_julia.c move.c init.c ft_hook_julia.c \
			ft_color.c ft_birdy.c ft_buffalo.c ft_druid.c

SRCS = $(addprefix $(SRCS_PATH),$(SRCS_NAME))

OBJ = $(SRCS:.c=.o)

LIBFT = $(LIBFT_PATH) -lft

MLX = $(MLX_PATH) -lmlx -lm

CC = gcc

LIB_FLAGS = -L$(MLX) -L$(LIBFT) -framework OpenGL -framework AppKit

all: $(NAME)

$(NAME): $(OBJ)
	@(make -C $(LIBFT_PATH))
	@($(CC) -o $(NAME) $(OBJ) $(LIB_FLAGS))
	@(echo "\x1b[1;34m$(NAME)\x1b[0m \x1b[32mcreated.\x1b[0m \x1b[1;32m✓\x1b[0m")

%.o: %.c
	@($(CC) -o $@ -c $< $(CFLAGS) -I $(INC_PATH) -I ./minilibx_macos)

clean:
	@(/bin/rm -f $(OBJ))
	@(echo "\x1b[1;34m$(NAME)\x1b[0m \x1b[31mcreated.\x1b[0m \x1b[1;32m✓\x1b[0m")
	@(make -C $(LIBFT_PATH) clean)

fclean: clean
	@(/bin/rm -f $(NAME))
	@(echo "\x1b[1;34m$(NAME)\x1b[0m \x1b[31mcreated.\x1b[0m \x1b[1;32m✓\x1b[0m")
	@(make -C $(LIBFT_PATH) fclean)

re: fclean all
