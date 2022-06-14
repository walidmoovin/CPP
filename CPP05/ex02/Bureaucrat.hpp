#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
	public:
		Bureaucrat(const std::string &name, unsigned int grade);
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat &operator=(const Bureaucrat &src);
		~Bureaucrat();
		const std::string name;
		unsigned int grade;
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
		void executeForm(const Form &form);
	private:
	protected:
};

#endif