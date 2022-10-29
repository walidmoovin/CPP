#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form {
	public:
		Form();
		Form(std::string const &name, unsigned int gradeToSign, unsigned int gradeToExecute);
		Form(Form const &src);
		~Form();
		Form & operator=(Form const& rhs);
		void beSigned(Bureaucrat & bureaucrat);
		void FormState();
	private:
		const std::string name;
		bool isSigned;
		unsigned int gradeToSign;
		unsigned int gradeToExecute;
		std::string whoSigned;
		class gradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class gradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
	protected:
};

std::ostream & operator<<(std::ostream &o, Form const &rhs);

#endif