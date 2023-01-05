#include "PhoneBook.hpp"

void PhoneBook::search(void)
{
	Contact c;

	std::cout << "*--------------------------------------------*" << std::endl;
	std::cout << "| Index | First Name | Last Name | Nick Name |" << std::endl;
}

void PhoneBook::add(void)
{
	PhoneBook P;
	this->contacts[this->index].seting_first_name();
	this->contacts[this->index].seting_last_name();
	this->contacts[this->index].seting_nick_name();
	this->contacts[this->index].seting_phone_number();
	this->contacts[this->index].seting_darkest_secret();
	this->index = 0;
	P.search();
}