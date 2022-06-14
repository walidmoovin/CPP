#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class AForm {
	public:
		AForm();
		AForm(const std::string &name, unsigned int gradeToSign, unsigned int gradeToExecute);
		AForm(const AForm &src);
		AForm & operator=(const AForm &rhs);
		~AForm();
		virtual void beSigned(Bureaucrat &bureaucrat);
		virtual void FormState();
		virtual void execute(const Bureaucrat &bureaucrat) = 0;
		bool getIsSigned();
		class gradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class gradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class notSignedFormException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
	private:
		const std::string name;
		bool isSigned;
		unsigned int gradeToSign;
		unsigned int gradeToExecute;
		std::string whoSigned;
	protected:
};

#endif