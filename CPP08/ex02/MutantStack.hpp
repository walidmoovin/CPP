#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>{
	public:
		MutantStack(){
			std::cout << "MutantStack constructor called" << std::endl;
		}
		MutantStack(const MutantStack &src){
			std::cout << "MutantStack copy constructor called" << std::endl;
			*this = src;
		}
		MutantStack &operator=(const MutantStack &rhs){
			std::cout << "MutantStack assignment operator called" << std::endl;
			if (this != &rhs)
				*this = rhs;
			return *this;
		}
		~MutantStack(){
			std::cout << "MutantStack destructor called" << std::endl;
		}
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin(){
			return this->c.begin();
		}
		iterator end(){
			return this->c.end();
		}
	private:
};

#endif