SRCS	= main.cpp ClapTrap.cpp
OBJS	= $(SRCS:.cpp=.o)
NAME	= claptrap
FLAGS	= -Wall -Wextra -Werror -std=c++98
all:	$(NAME)
$(NAME): $(OBJS)
	@g++ $(FLAGS) -o $(NAME) $(OBJS)
clean:
	@rm -f $(OBJS) $(B_OBJS)
fclean: clean
	@rm -f $(NAME) $(BONUS)
re: fclean all