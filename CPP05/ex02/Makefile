SRCS		= main2.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp
OBJS		= $(SRCS:.cpp=.o)
NAME		= main
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
all:	$(NAME)
$(NAME): $(OBJS)
	g++ $(CXXFLAGS) -o $(NAME) $(OBJS)
clean:
	rm -f $(OBJS) $(B_OBJS) Bob_shrubbery main.o main2.o main3.o
fclean: clean
	rm -f $(NAME) $(BONUS)
re: fclean all