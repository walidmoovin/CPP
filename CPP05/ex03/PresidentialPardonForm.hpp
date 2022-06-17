#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public AForm{
	public:
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &src);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &src);
		~PresidentialPardonForm();
		void execute(Bureaucrat const &executor);
	private:
		const std::string _target;
	protected:
};

#endif