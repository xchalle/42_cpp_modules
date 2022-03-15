# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xchalle <xchalle@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/14 13:55:04 by xchalle           #+#    #+#              #
#    Updated: 2022/03/15 14:03:03 by xchalle          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	main.cpp \
	AMateria.cpp \
	MateriaSource.cpp \
	Character.cpp \
	Cure.cpp \
	Ice.cpp \ 

NAME = Amateria

XXFLAGS = -Wall -Werror -Wextra -std=c++98 -g3

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
