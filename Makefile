# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/13 10:54:55 by creyt             #+#    #+#              #
#    Updated: 2021/12/14 11:42:31 by creyt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line
HEAD = get_next_line.h
CC = gcc
CFLAGS = -Werror -Wextra -Wall -D BUFFER_SIZE=42
OBJ = $(SRC:%.c=%.o)

$(NAME): $(OBJ)
		ar -rcs $(NAME) $(OBJ)

all: $(NAME)

%.o: %.c
		$(CC) -c $(CLFAGS) $< -o $@

clean:
		@rm -rf $(OBJ)

fclean : clean
		@rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re
