SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = megaphone
FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)
$(NAME): $(OBJS)
	c++ $(FLAGS) -o $(NAME) $(OBJS)
clean:
	@rm -f $(OBJS)
fclean: clean
	@rm -f $(NAME)
re: fclean all