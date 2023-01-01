#include "Contact.hpp"

int main(void)
{
	std::string	s;
	while (std::cin.eof() == 0)
	{
		std::cout << "Enter: -> ---ADD/SEARCH/EXIT--- <- " << std::endl;
		std::cin >> s;
		if (s == "ADD")
			std::cout << "this is add" << std::endl;
			else if(s == "SEARCH")
			std::cout << "this is search" << std::endl;
			else if(s == "EXIT")
			std::cout << "this is exit" << std::endl;
		//break;
	}
	
}