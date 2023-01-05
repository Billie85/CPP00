#ifndef PhoneBook_HPP
#define PhoneBook_HPP
#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
private:
	int count;
	int	index;
	Contact	contacts[8];
public:
	PhoneBook(){};
	~PhoneBook(){};
	void add(void);
	void search(void);
	//void display(Contact in);
};
#endif