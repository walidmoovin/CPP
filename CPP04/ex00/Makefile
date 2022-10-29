SRCS		= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
OBJS		= $(SRCS:.cpp=.o)
NAME		= main
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
all:	$(NAME)
$(NAME): $(OBJS)
	g++ $(CXXFLAGS) -o $(NAME) $(OBJS)
clean:
	rm -f $(OBJS) $(B_OBJS)
fclean: clean
	rm -f $(NAME) $(BONUS)
re: fclean all