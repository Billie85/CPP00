#include "Contact.hpp"

void Contact::seting_first_name(void)
{
	std::string s;

	s = "";
		std::cout << "input First Name : " << std::endl;
	while(s == "")
	{
		std::getline(std::cin, s);
	}
	this->first_name = s;
}

 void Contact::seting_last_name(void)
{
	std::string s;

	s = "";
		std::cout << "input Last Name : " << std::endl;
	while(s == "")
	{
		std::getline(std::cin, s);
	}
	this->last_name = s;
}

void Contact::seting_nick_name(void)
{
	std::string s;

	s = "";
		std::cout << "input Nick Name : " << std::endl;
	while(s == "")
	{
		std::getline(std::cin, s);
	}
	this->nick_name = s;
}

void Contact::seting_phone_number(void)
{
	std::string s;

	s = "";
		std::cout << "input Phone Number : " << std::endl;
	while(s == "")
	{
		std::getline(std::cin, s);
	}
	this->phone_number = s;
}

void Contact::seting_darkest_secret(void)
{
	std::string s;

	s = "";
		std::cout << "input darkest secret : " << std::endl;
	while(s == "")
	{
		std::getline(std::cin, s);
	}
	this->darkest_secret = s;
}
 std::string Contact::get_first_name(void)
{
	return(this->first_name);
}
std::string Contact::get_last_name(void)
{
	return(this->last_name);
}
std::string Contact::get_nick_name(void)
{
	return(this->nick_name);
}
std::string Contact::get_phone_number(void)
{
	return(this->phone_number);
}
std::string Contact::get_darkest_secret(void)
{
	return(this->darkest_secret);
}