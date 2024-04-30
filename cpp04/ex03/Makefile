NAME		=	interface

SRCS_DIR	=	srcs
OBJS_DIR	=	objs

SRCS		=	srcs/main.cpp \
				srcs/AMateria.class.cpp \
				srcs/Cure.class.cpp \
				srcs/Ice.class.cpp \
				srcs/Character.class.cpp \
				srcs/MateriaSource.cpp

OBJS	=	$(patsubst $(SRCS_DIR)/%.cpp,$(OBJS_DIR)/%.o,$(SRCS))

RM	=	rm -rf
CXX	=	c++
FLAGS	=	-I./inc -Wall -Wextra -Werror -std=c++98

$(NAME):	$(OBJS)
	$(CXX) $(FLAGS) $^ -o $@

$(OBJS_DIR)/%.o:	$(SRCS_DIR)/%.cpp | $(OBJS_DIR)
	$(CXX) $(FLAGS) -c $< -o $@

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

all:	$(NAME)

clean:
	$(RM) $(OBJS_DIR)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re