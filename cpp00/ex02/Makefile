NAME		=	account

SRCS		=	tests.cpp \
				Account.cpp \

OBJS		=	$(SRCS:.cpp=.o)

COMPILE		=	clang++
FLAGS		=	-I./ -Wall -Wextra -Werror -g3 -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILE) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)
	
re:	fclean all

.cpp.o:
	${COMPILE} ${FLAGS} -c $< -o ${<:.cpp=.o}

.PHONY:	all clean fclean re