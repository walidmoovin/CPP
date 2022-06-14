SRCS		= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJS		= $(SRCS:.cpp=.o)
NAME		= fragtrap
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
all:	$(NAME)
$(NAME): $(OBJS)
	g++ $(CXXFLAGS) -o $(NAME) $(OBJS)
clean:
	rm -f $(OBJS) $(B_OBJS)
fclean: clean
	rm -f $(NAME) $(BONUS)
re: fclean all