#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class Contact {
	public:
		Contact();
		~Contact();
		std::string getFirstname();
		std::string getLastname();
		std::string getNickname();
		std::string getPhonenumber();
		std::string getDarkestsecret();
		void setFirstname(std::string firstname);
		void setLastname(std::string lastname);
		void setNickname(std::string nickname);
		void setPhonenumber(std::string phonenumber);
		void setDarkestsecret(std::string darkestsecret);
	private:
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