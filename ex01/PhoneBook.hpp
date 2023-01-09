#ifndef PhoneBook_HPP
#define PhoneBook_HPP
#include <iostream>
#include "Contact.hpp"
#include <iomanip>

class PhoneBook
{
private:
	int count;
	int	base;
	Contact	contacts[8];
public:
	PhoneBook(void)
	{
		this->count = 0;
		this->base = 0;
	};
	~PhoneBook(){};
	void add(void);
	void search(void);
};
#endif