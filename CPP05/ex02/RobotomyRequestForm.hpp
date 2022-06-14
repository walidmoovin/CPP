#ifndef ROBOTORYREQUESTFORM_HPP
# define ROBOTORYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public AForm {
	public:
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &src);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &src);
		~RobotomyRequestForm();
	private:
		const std::string _target;
	protected:
};

#endif