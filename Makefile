##
## Makefile for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/Makefile
##
## Made by Maxime Pillon
## Login   <maxime.pillon@epitech.eu>
##
## Started on  Mon Apr 25 07:46:27 2016 Maxime Pillon
## Last update Tue May 24 15:42:35 2016 Pillon maxime
##

CC		=	gcc

RM		=	rm -f

CFLAGS		+=	-W -Wextra -Wall
CFLAGS		+=	-Werror
CFLAGS		+=	-Iincludes
CFLAGS		+=	-g -ggdb3

NAME		=	ia

SRCS		=	sources/main.c \
			sources/gst/my_str_to_wordtab.c \
			sources/gst/my_strcmp.c \
			sources/gst/my_strdup.c \
			sources/gst/my_strncat.c \
			sources/gst/my_strlen.c \
			sources/gst/putnbr.c \
			sources/gst/my_getnbr.c \
			sources/gst/get_next_line.c \
			sources/gst/my_getfloat.c \
			sources/game/acceleration.c \
			sources/gst/put_float.c \
			sources/game/analyse.c \
			sources/game/turn.c \
			sources/game/speed_need.c \
			sources/game/get_index.c \
			sources/game/stock_lidar_data.c \
			sources/game/check_and_analyse_error.c \
			sources/game/keep_direction.c \
			sources/game/launch_race.c \
			sources/game/need_turn.c \
			sources/game/play_game.c \
			sources/game/angle_correction.c \
			sources/game/angle_need.c \
			sources/gst/error_message.c \
			sources/use_cmd/car_backward.c \
			sources/use_cmd/car_forward.c \
			sources/use_cmd/cycle_wait.c \
			sources/use_cmd/get_current_speed.c \
			sources/use_cmd/get_current_wheels.c \
			sources/use_cmd/get_lidar.c \
			sources/use_cmd/start_simulation.c \
			sources/use_cmd/stop_simulation.c \
			sources/use_cmd/wheels_dir.c

OBJS		=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(OBJS) -o $(NAME) -Iincludes

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
