#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class AForm {
	public:
		AForm();
		AForm(std::string const &name, unsigned int gradeToSign, unsigned int gradeToExecute);
		AForm(AForm const &src);
		~AForm();
		AForm & operator=(AForm const& rhs);
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

#endif