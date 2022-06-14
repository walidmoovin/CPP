SRCS = main.cpp Harl.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = main
FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)
$(NAME): $(OBJS)
	c++ $(FLAGS) $(OBJS) -I./ -o $(NAME)
clean:
	@rm -f $(OBJS)
fclean: clean
	@rm -f $(NAME)
re: fclean all