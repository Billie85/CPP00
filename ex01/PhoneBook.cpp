#include "PhoneBook.hpp"

void PhoneBook::search(void)
{
	std::cout << "*--------------------------------------------*" << std::endl;
	std::cout << "| Index |First Name|Last Name |Nick Name |" << std::endl;
	for (int i = 0; i < this->count; i++)
	{
		std::cout << std::setw(1) << '|' << \
		std::setw(7) << i + 1 << std::setw(1) << '|' << \
		std::setw(10) << ((this->contacts[(this->base + i) % 8].get_first_name().length() <= 10) ? (this->contacts[(this->base + i) % 8].get_first_name().substr(0,10)) : (this->contacts[(this->base + i) % 8].get_first_name().substr(0,9) + ".")  )<< std::setw(1) << '|' << \
		std::setw(10) << ((this->contacts[(this->base + i) % 8].get_last_name().length() <= 10) ? (this->contacts[(this->base + i) % 8].get_last_name().substr(0,10)) : (this->contacts[(this->base + i) % 8].get_last_name().substr(0,9) + ".")  )<< std::setw(1) << '|' << \
		std::setw(10) << ((this->contacts[(this->base + i) % 8].get_nick_name().length() <= 10) ? (this->contacts[(this->base + i) % 8].get_nick_name().substr(0,10)) : (this->contacts[(this->base + i) % 8].get_nick_name().substr(0,9) + ".")  )<< std::setw(1) << '|' << \
		std::endl;
	}
}

void PhoneBook::add(void)
{
	this->contacts[(this->base + this->count) % 8].seting_first_name();
	this->contacts[(this->base + this->count) % 8].seting_last_name();
	this->contacts[(this->base + this->count) % 8].seting_nick_name();
	this->contacts[(this->base + this->count) % 8].seting_phone_number();
	this->contacts[(this->base + this->count) % 8].seting_darkest_secret();
	if (this->count < 8)
		this->count++;
	else
	{
		this->base++;
		this->base %= 8;
	}
} 