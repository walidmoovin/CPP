#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	public:
		Array<T>(){
			std::cout << "Array constructor called" << std::endl;
			this->size = 0;
			this->tab = NULL;
		}
		Array<T>(unsigned int n){
			std::cout << "Array constructor called" << std::endl;
			this->size = n;
			this->tab = new T[n];
		}
		Array<T>(const Array &src){
			std::cout << "Array copy constructor called" << std::endl;
			*this = src;
		}
		~Array<T>(){
			std::cout << "Array destructor called" << std::endl;
			delete[] this->tab;
		}
		Array<T> &operator=(const Array &rhs){
			std::cout << "Array assignation called" << std::endl;
			if (this != &rhs){
				delete[] this->tab;
				this->size = rhs.size;
				this->tab = new T[this->size];
				for (unsigned int i = 0; i < this->size; i++)
					this->tab[i] = rhs.tab[i];
			}
			return (*this);
		}
		T &operator[](unsigned int i){
			if (i >= this->size)
				throw Array::invalidIndexException();
			return (this->tab[i]);
		}
		const unsigned int getSize(){
			return (this->size);
		}
		class invalidIndexException : public std::exception {
			public:
				virtual const char* what() const throw(){
					return ("Invalid index");
				}
		};
		T *tab;
		unsigned int size;
	private:
};

#endif