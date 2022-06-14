#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class Contact {
	public:
		Contact();
		~Contact();
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phonenumber;
		std::string darkestsecret;
};

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();
	private:
		int enterCommand();
		void correct_info(std::string info) const;
		int only_digits(std::string info) const;
		Contact contacts[8];
		int counter;
};

#endif