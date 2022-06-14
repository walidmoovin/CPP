#include <iostream>
#include "PhoneBook.hpp"
#include <stdlib.h>

PhoneBook::PhoneBook() : counter(0){
	while (this->enterCommand())
		;
	return;
}

PhoneBook::~PhoneBook(){
	return;
}

void PhoneBook::correct_info(std::string info) const{
	if (info.length() > 10)
	{
		for (int y = 0; y < 9; y++)
			std::cout << info[y];
		std::cout << "." << "|";
	}
	else if (info.length() < 10)
	{
		int y = 0;
		while(y < info.length()){
			std::cout << info[y];
			y++;
		}
		while (y < 10){
			std::cout << " ";
			y++;
		}
		std::cout << "|";
	}
	else
		std::cout << info << "|";
}

int PhoneBook::only_digits(std::string number) const{
	for (int i = 0; i < number.length(); i++)
		if (!isdigit(number[i]))
			return 0;
	return 1;
}

int PhoneBook::enterCommand(){
	std::string command;
	std::cin >> command;
	if (!command.compare("ADD")){
		std::cout << "enter firstname" << std::endl;
		std::cin >> this->contacts[this->counter % 8].firstname;
		while (this->contacts[this->counter % 8].firstname.length() == 0)
			std::cin >> this->contacts[this->counter % 8].firstname;
		std::cout << "enter lastname" << std::endl;
		std::cin >> this->contacts[this->counter % 8].lastname;
		while (this->contacts[this->counter % 8].lastname.length() == 0)
			std::cin >> this->contacts[this->counter % 8].lastname;
		std::cout << "enter nickname" << std::endl;
		std::cin >> this->contacts[this->counter % 8].nickname;
		while (this->contacts[this->counter % 8].nickname.length() == 0)
			std::cin >> this->contacts[this->counter % 8].nickname;
		std::cout << "enter phonenumber" << std::endl;
		std::cin >> this->contacts[this->counter % 8].phonenumber;
		while (this->contacts[this->counter % 8].phonenumber.length() == 0 || !this->only_digits(this->contacts[this->counter % 8].phonenumber))
			std::cin >> this->contacts[this->counter % 8].phonenumber;
		std::cout << "enter darkestsecret" << std::endl;
		std::cin >> this->contacts[this->counter % 8].darkestsecret;
		while (this->contacts[this->counter % 8].darkestsecret.length() == 0)
			std::cin >> this->contacts[this->counter % 8].darkestsecret;
		this->counter++;
		return 1;
	}
	if (!command.compare("SEARCH")){
		if (!this->counter){
			std::cout << "first create a new contact" << std::endl;
			return 1;
		}
		char *index;
		for (int i = 0; i < this->counter; i++){
			std::cout << i;
			for (int y = 0; y < 9; y++)
				y == 8 ? std::cout << " " << "|" : std::cout << " ";
			correct_info(this->contacts[i].firstname);
			correct_info(this->contacts[i].lastname);
			correct_info(this->contacts[i].nickname);
			std::cout << std::endl;
		}
		std::cout << "enter contact's index to display" << std::endl;
		std::cin >> index;
		if (!this->only_digits(index) || atoi(index) < 0 || atoi(index) > 7 || atoi(index) >= this->counter){
			std::cout << "not a valid index" << std::endl;
			return 1;
		}
		else{
			std::cout << this->contacts[atoi(index)].firstname << std::endl;
			std::cout << this->contacts[atoi(index)].lastname << std::endl;
			std::cout << this->contacts[atoi(index)].nickname << std::endl;
			std::cout << this->contacts[atoi(index)].phonenumber << std::endl;
			std::cout << this->contacts[atoi(index)].darkestsecret << std::endl;
			return 1;
		}
	}
	if (!command.compare("EXIT"))
		return 0;
	return 1;
}

Contact::Contact(){
	return;
}

Contact::~Contact(){
	return;
}

