#include <stdlib.h>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
	std::string	s;
	PhoneBook p;

	while (1)
	{
		std::cout <<  "Enter: -> ---ADD/SEARCH/EXIT--- <- : " ;
		std::cin >> s ;
		if (s == "ADD")
			p.add();
			else if(s == "SEARCH")
			p.search();
			else if(s == "EXIT")
			return (0);
	}
	return (0);
}