#include "Fixed.hpp"

Fixed::Fixed() : _n(0)
{
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
}

Fixed::Fixed(int const n) : _n(n << _numberOfBits)
{
}

Fixed::Fixed(float const n) : _n(roundf(n * (1 << _numberOfBits)))
{
}

Fixed::~Fixed()
{
}

Fixed & Fixed::operator=(Fixed const & src)
{
	this->_n = src.getRawBits();
	return *this;
}

int Fixed::getRawBits() const
{
	return this->_n;
}

void Fixed::setRawBits(int const raw)
{
	this->_n = raw;
	return;
}

float Fixed::toFloat(void) const
{
	return ((float)this->_n / (float)(1 << _numberOfBits));
}

int Fixed::toInt(void) const
{
	return (this->_n >> _numberOfBits);
}

std::ostream & operator<<(std::ostream & o, Fixed const & src)
{
	o << src.toFloat();
	return o;
}

Fixed Fixed::operator+(Fixed const & rhs) const
{
	return Fixed(this->getRawBits() + rhs.getRawBits());
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
	return Fixed(this->getRawBits() - rhs.getRawBits());
}

Fixed Fixed::operator*(Fixed const & rhs) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const & rhs) const
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

bool Fixed::operator>(Fixed const & rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const & rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator<(Fixed const & rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const & rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const & rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const & rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}

Fixed& Fixed::operator++(void)
{
	this->_n++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->_n++;
	return tmp;
}

Fixed& Fixed::operator--(void)
{
	this->_n--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->_n--;
	return tmp;
}

Fixed & Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed & Fixed::min(const Fixed& a, const Fixed& b)
{
	return (a < b ? a : b);
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed & Fixed::max(const Fixed& a, const Fixed& b)
{
	return (a > b ? a : b);
}