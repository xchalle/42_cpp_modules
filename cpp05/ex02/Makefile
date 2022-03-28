# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xchalle <xchalle@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/14 13:55:04 by xchalle           #+#    #+#              #
#    Updated: 2022/03/28 11:36:33 by xchalle          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	Bureaucrat.cpp \
	AForm.cpp \
	PresidentialPardonForm.cpp \
	ShrubberyCreationForm.cpp \
	RobotomyRequestForm.cpp \
	main.cpp
	

NAME = Forms

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
