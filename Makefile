# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sapark <sapark@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/01 10:08:57 by sapark            #+#    #+#              #
#    Updated: 2019/05/15 23:11:12 by sapark           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -Iincludes
 
SRC	=	$(wildcard src/*.c)
OBJ	=	$(patsubst src/%.c, obj/%.o, $(SRC))

all		:	$(NAME)

obj		:
			mkdir obj


obj/%.o	: 	src/%.c
			$(CC) $(CFLAGS) $(OPTION) -c -o $@ $<

$(NAME)	: 	obj $(OBJ)
			ar rc $(NAME) $(OBJ)
			ranlib $(NAME)

clean	:
			-rm -rf obj

fclean	: 	clean
			-rm -f $(NAME)

re		: 	fclean $(NAME)

.PHONY	: 	clean fclean re


# CC = gcc
# CFLAGS = -Wall -Wextra -Werror
# INC = -Ilibft.h
# TARGET = libft.a
# SRCS = *.c
# OBJECT = *.o
# DEBUG = -g -fsanitize=address

# .PHONY : all clean fclean re

# all : $(TARGET)

# $(OBJECT) : $(SRCS)
# 	$(CC) $(CFLAGS) -c $(INC) $(SRCS) $(DEBUG)

# $(TARGET) : $(OBJECT)
# 	ar rc $(TARGET) $(OBJECT)
# 	ranlib $(TARGET)

# clean :
# 	rm -f $(OBJECT)
# fclean : clean
# 	rm -f $(TARGET)
# re : fclean all