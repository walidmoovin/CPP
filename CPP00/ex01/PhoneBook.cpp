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
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phonenumber;
	std::string darkestsecret;
	if (!command.compare("ADD")){
		int	index = this->counter % 8;
		std::cout << "enter firstname" << std::endl;
		while (firstname.length() == 0)
			std::cin >> firstname;
		this->contacts[index].setFirstname(firstname);
		std::cout << "enter lastname" << std::endl;
		while (lastname.length() == 0)
			std::cin >> lastname;
		this->contacts[index].setLastname(lastname);
		std::cout << "enter nickname" << std::endl;
		while (nickname.length() == 0)
			std::cin >> nickname;
		this->contacts[index].setNickname(nickname);
		std::cout << "enter phonenumber" << std::endl;
		while (phonenumber.length() == 0)
			std::cin >> phonenumber;
		this->contacts[index].setPhonenumber(phonenumber);
		std::cout << "enter darkestsecret" << std::endl;
		while (darkestsecret.length() == 0)
			std::cin >> darkestsecret;
		this->contacts[index].setDarkestsecret(darkestsecret);
		this->counter++;
		return 1;
	}
	if (!command.compare("SEARCH")){
		if (!this->counter){
			std::cout << "first create a new contact" << std::endl;
			return 1;
		}
		std::string index;
		for (int i = 0; i < std::min(this->counter, 8); i++){
			std::cout << i;
			for (int y = 0; y < 8; y++)
				y == 7 ? std::cout << " " << "|" : std::cout << " ";
			correct_info(this->contacts[i].getFirstname());
			correct_info(this->contacts[i].getLastname());
			correct_info(this->contacts[i].getNickname());
			std::cout << std::endl;
		}
		std::cout << "enter contact's index to display" << std::endl;
		std::cin >> index;
		if (!this->only_digits(index.c_str()) || atoi(index.c_str()) < 0 || atoi(index.c_str()) > 7 || atoi(index.c_str()) >= this->counter){
			std::cout << "not a valid index" << std::endl;
			return 1;
		}
		else{
			std::cout << this->contacts[atoi(index.c_str())].getFirstname() << std::endl;
			std::cout << this->contacts[atoi(index.c_str())].getLastname() << std::endl;
			std::cout << this->contacts[atoi(index.c_str())].getNickname() << std::endl;
			std::cout << this->contacts[atoi(index.c_str())].getPhonenumber() << std::endl;
			std::cout << this->contacts[atoi(index.c_str())].getDarkestsecret() << std::endl;
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

std::string Contact::getFirstname(){
	return this->firstname;
}

std::string Contact::getLastname(){
	return this->lastname;
}

std::string Contact::getNickname(){
	return this->nickname;
}

std::string Contact::getPhonenumber(){
	return this->phonenumber;
}

std::string Contact::getDarkestsecret(){
	return this->darkestsecret;
}

void Contact::setFirstname(std::string firstname){
	this->firstname = firstname;
}

void Contact::setLastname(std::string lastname){
	this->lastname = lastname;
}

void Contact::setNickname(std::string nickname){
	this->nickname = nickname;
}

void Contact::setPhonenumber(std::string phonenumber){
	this->phonenumber = phonenumber;
}

void Contact::setDarkestsecret(std::string darkestsecret){
	this->darkestsecret = darkestsecret;
}
