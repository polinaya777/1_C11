# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pyarova <pyarova@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/26 10:38:33 by pyarova           #+#    #+#              #
#    Updated: 2024/09/26 13:07:01 by pyarova          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op 
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = ft.h
SRC = ft_do_op.c ft_utils.c ft_operations.c
OBJ = $(SRC:.c=.o)

%.o: %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -I$(INCLUDES) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
