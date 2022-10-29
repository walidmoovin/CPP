#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	public:
		Fixed();
		Fixed(float const n);
		Fixed(int const n);
		Fixed(Fixed const & src);
		~Fixed();
		Fixed & operator=(Fixed const & src);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
	private:
		int _n;
		static const int _numberOfBits = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & src);

#endif