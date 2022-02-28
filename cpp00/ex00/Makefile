# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xchalle <xchalle@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/14 13:55:04 by xchalle           #+#    #+#              #
#    Updated: 2021/10/22 10:54:27 by xchalle          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 	megaphone.cpp \

NAME = PhoneBook

CFLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++ $(CFLAGS)

OBJ = $(SRC:.cpp=.o)

all:	$(NAME)

$(%.o): $(%.cpp)
	$(CC) -o $@ -c $^

$(NAME): $(OBJ)
		$(CC) -o $@ $^

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
