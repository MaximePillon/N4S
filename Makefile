##
## Makefile for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/Makefile
##
## Made by Maxime Pillon
## Login   <maxime.pillon@epitech.eu>
##
## Started on  Mon Apr 25 07:46:27 2016 Maxime Pillon
## Last update Mon Apr 25 07:46:34 2016 Maxime Pillon
##

CC		=	gcc

RM		=	rm -f

CFLAGS		+=	-W -Wextra -Wall
CFLAGS		+=	-Werror
CFLAGS		+=	-Iincludes
CFLAGS		+=	-g -ggdb3

NAME		=	ia

SRCS		=	sources/main.c

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
