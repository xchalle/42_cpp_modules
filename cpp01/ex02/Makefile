# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xchalle <xchalle@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/14 13:55:04 by xchalle           #+#    #+#              #
#    Updated: 2022/03/12 14:16:03 by xchalle          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	main.cpp \

NAME = Brain

XXFLAGS = -Wall -Werror -Wextra -std=c++98

XX = c++ $(XXFLAGS)

OBJ = $(SRC:.cpp=.o)

all:	$(NAME)

$(%.o): $(%.cpp)
	$(XX) -o $@ -c $^

$(NAME): $(OBJ)
		$(XX) -o $@ $^

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
