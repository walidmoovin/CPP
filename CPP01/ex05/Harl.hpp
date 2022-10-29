#ifndef HARL_CPP
# define HARL_CPP

#include <iostream>

class Harl {
	public:
		Harl();
		~Harl();
		void complain(std::string level);
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif