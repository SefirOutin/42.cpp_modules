# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: soutin <soutin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/03 14:22:48 by soutin            #+#    #+#              #
#    Updated: 2024/04/03 14:23:58 by soutin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone

SRCS		=	megaphone.cpp
OBJS		=	$(SRCS:.cpp=.o)

COMPILE		=	clang++
FLAGS		=	-Wall -Wextra -Werror -g3 -std=c++98

# ------------------------------------- RULES ---------------------------------

all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILE) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(EXEC)
	
re:	fclean all

.cpp.o:
	${COMPILE} ${FLAGS} -c $< -o ${<:.cpp=.o}

# ------------------------------------- TESTS ----------------------------------

test1: all
	./$(NAME) "shhhhh... I think the students are asleep..."

test2: all
	./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."

test3: all
	./$(NAME)

.PHONY:	all clean fclean re test1 test2 test3