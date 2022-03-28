# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xchalle <xchalle@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/14 13:55:04 by xchalle           #+#    #+#              #
#    Updated: 2022/03/28 16:06:03 by xchalle          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	main.cpp \
	Span.cpp

NAME = EasyFind

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

CXX = c++

OBJ = $(SRC:.cpp=.o)

all:	$(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $^

$(NAME): $(OBJ)
		$(CXX) $(CXXFLAGS) -o $@ $^

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
