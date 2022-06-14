#include "Fixed.hpp"

Fixed::Fixed() : _n(0){
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(Fixed const & src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}
Fixed::Fixed(int const n) : _n(n << _numberOfBits){
	std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(float const n) : _n(roundf(n * (1 << _numberOfBits))){
	std::cout << "Float constructor called" << std::endl;
}
Fixed::~Fixed(){
	std::cout << "destructor called" << std::endl;
}
Fixed & Fixed::operator=(Fixed const & src){
	std::cout << "Copy assignment operator called" << std::endl;
	this->_n = src.getRawBits();
	return *this;
}
int Fixed::getRawBits() const{
	return this->_n;
}
void Fixed::setRawBits(int const raw){
	this->_n = raw;
	return;
}
float Fixed::toFloat(void) const{
	return ((float)this->_n / (float)(1 << _numberOfBits));
}
int Fixed::toInt(void) const{
	return (this->_n >> _numberOfBits);
}
std::ostream & operator<<(std::ostream & o, Fixed const & src){
	o << src.toFloat();
	return o;
}