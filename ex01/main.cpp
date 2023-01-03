#include "Contact.hpp"

int main(void)
{
	std::string	s;
	while (std::cin.eof() == 0)
	{
		Contact	input;
		int count_contact;
		std::cout << "Enter: -> ---ADD/SEARCH/EXIT--- <- " << std::endl;
		std::cin >> s;

		count_contact = 0;
		if (s == "ADD")
		{
			std::cout << "input First Name     : ";
		 	std::cin >> s;
			std::cout << "input Last Name      : ";
			std::cin >> s;
			std::cout << "input Nick Name      : ";
			std::cin >> s;
			std::cout << "input Phone Number   : ";
			std::cin >> s;
			std::cout << "input Darkest Secret : ";
			std::cin >> s;
			count_contact++;
		}
		/* 	else if(s == "SEARCH")
			std::cout << "this is search" << std::endl;
			else if(s == "EXIT")
			std::cout << "this is exit" << std::endl; */
		//break;
	}
	return (0);
}