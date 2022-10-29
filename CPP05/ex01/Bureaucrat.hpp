#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
	public:
		Bureaucrat(std::string const &name, unsigned int grade);
		Bureaucrat(Bureaucrat const &src);
		Bureaucrat & operator=(Bureaucrat const &rhs);
		~Bureaucrat();
		std::string getName() const;
		unsigned int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		class gradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class gradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
	private:
		const std::string name;
		unsigned int grade;
	protected:
};

std::ostream & operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif