#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>{
	public:
		MutantStack();
		MutantStack(const MutantStack &src);
		MutantStack &operator=(const MutantStack &rhs);
		~MutantStack();
		void push(const T &elem);
		// void pop();
		// T top() const;
		// size_t size() const;
		// bool empty() const;
	private:
};

#endif