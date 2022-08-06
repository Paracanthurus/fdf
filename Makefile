# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/21 06:13:46 by aokubo            #+#    #+#              #
#    Updated: 2022/08/07 01:04:20 by aokubo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= fdf
SRC_DIR	=
SRC		= main.c\
			ft_abs.c\
			ft_atox.c\
			ft_calcolor_dx.c\
			ft_calcolor_dy.c\
			ft_calline_dx.c\
			ft_calline_dy.c\
			ft_click_x_hook.c\
			ft_col_init.c\
			ft_drawimg.c\
			ft_dtoi_point.c\
			ft_fitting.c\
			ft_getlimit.c\
			ft_gnl_and_split.c\
			ft_isdigit_hex.c\
			ft_isspace.c\
			ft_itorgb.c\
			ft_key_hook.c\
			ft_opfile.c\
			ft_pointadd_back.c\
			ft_pointclear.c\
			ft_pointlast.c\
			ft_pointnew.c\
			ft_putline_map.c\
			ft_putline.c\
			ft_putpixel.c\
			ft_readcolor.c\
			ft_readmap.c\
			ft_readpoint.c\
			ft_rgbtoi.c\
			ft_transform.c
# SRCS	= $(addprefix{$(SRC_DIR)/, $(SRC)})
SRCS	= $(SRC)

OBJ_DIR = obj
# OBJS	= $(addprefix{$(SRC_DIR)/, $(SRC:%.c=%.o)})
OBJS	= $(SRCS:%.c=%.o)
# B_SRCS	=
# B_OBJS	= $(B_SRCS:.c=.o)
# ifdef BONUS
#  OBJS += $(B_OBJS)
# endif
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

INCLUDE	= -I/usr/X11/include

MLXFLAG	= -framework OpenGL -framework AppKit

LIB		=  -Lft_printf -lftprintf -Lget_next_line -lgnl -Lminilibx-linux -lmlx_Darwin -L/usr/X11R6/lib -lX11 -lXext

all:		$(NAME)

$(NAME):	$(LIB) $(OBJS)
			$(CC) -o $@ $(MLXFLAG) $(INCLUDE) $^

$(LIB):
			make bonus -C get_next_line
			make -C ft_printf
			make -C minilibx-linux

.c.o:
			$(CC) $(CFLAGS) $(INCLUDE) -c $< -o ${<:.c=.o}

clean:
			$(RM) $(OBJS) $(B_OBJS)
			make fclean -C ft_printf
			make fclean -C get_next_line
			make clean -C minilibx-linux

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

bonus:
			make BONUS=1

.PHONY:		all clean fclean re bonus
