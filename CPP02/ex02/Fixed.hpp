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
		Fixed operator+(Fixed const & rhs) const;
		Fixed operator-(Fixed const & rhs) const;
		Fixed operator*(Fixed const & rhs) const;
		Fixed operator/(Fixed const & rhs) const;

		bool operator>(Fixed const & rhs) const;
		bool operator>=(Fixed const & rhs) const;
		bool operator<(Fixed const & rhs) const;
		bool operator<=(Fixed const & rhs) const;
		bool operator==(Fixed const & rhs) const;
		bool operator!=(Fixed const & rhs) const;

		Fixed& operator++(void);
		Fixed  operator++(int);
		Fixed& operator--(void);
		Fixed  operator--(int);

		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed& a, const Fixed& b);

		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed& a, const Fixed& b);
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