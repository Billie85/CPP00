#include "Contact.hpp"
#include "PhoneBook.hpp"

//printf("%s\n", input.get_first_name().c_str());
int main(void)
{
	std::string	s;
	PhoneBook p;
	while (std::cin.eof() == 0)
	{	
		std::cout << "Enter: -> ---ADD/SEARCH/EXIT--- <- " << std::endl;
		std::cin >> s;

		if (s == "ADD")
			p.add();
			else if(s == "SEARCH")
			std::cout << "this is search" << std::endl;
			else if(s == "EXIT")
			std::cout << "this is exit" << std::endl;
		//break;
	}
	return (0);
}