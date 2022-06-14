SRCS = PhoneBook.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = phonebook
FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)
$(NAME): $(OBJS)
	c++ $(FLAGS) $(OBJS) -I./ -o $(NAME)
clean:
	@rm -f $(OBJS)
fclean: clean
	@rm -f $(NAME)
re: fclean all