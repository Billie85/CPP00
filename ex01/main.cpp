#include "Contact.hpp"

//printf("%s\n", input.get_first_name().c_str());
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
			input.seting_first_name(s);

			std::cout << "input Last Name      : ";
			std::cin >> s;
			input.seting_last_name(s);

			std::cout << "input Nick Name      : ";
			std::cin >> s;
			input.seting_nick_name(s);

			std::cout << "input Phone Number   : ";
			std::cin >> s;
			input.seting_phone_number(s);

			std::cout << "input Darkest Secret : ";
			std::cin >> s;
			input.seting_darkest_secret(s);
			count_contact++;
		}
		printf("[%s]\n", input.get_first_name().c_str());
		printf("[%s]\n", input.get_last_name().c_str());
		printf("[%s]\n", input.get_nick_name().c_str());
		printf("[%s]\n", input.get_phone_number().c_str());
		printf("[%s]\n", input.get_darkest_secret().c_str());
		/* 	else if(s == "SEARCH")
			std::cout << "this is search" << std::endl;
			else if(s == "EXIT")
			std::cout << "this is exit" << std::endl; */
		//break;
	}
	return (0);
}