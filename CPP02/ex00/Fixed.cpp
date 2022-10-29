#include "Fixed.hpp"

Fixed::Fixed() : _n(0){
	std::cout << "Default constructor called" << std::endl;
	return;
}
Fixed::Fixed(Fixed const & src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}
Fixed::~Fixed(){
	std::cout << "destructor called" << std::endl;
	return;
}
Fixed & Fixed::operator=(Fixed const & src){
	std::cout << "Copy assignment operator called" << std::endl;
	this->_n = src.getRawBits();
	return *this;
}
int Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_n;
}
void Fixed::setRawBits(int const raw){
	this->_n = raw;
	return;
}