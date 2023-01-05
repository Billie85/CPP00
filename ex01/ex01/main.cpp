#include "Contact.hpp"
#include "PhoneBook.hpp"

//printf("%s\n", input.get_first_name().c_str());
int main(void)
{
	std::string	s;
	PhoneBook p;

	while (1)
	{
		s = readline ("Enter: -> ---ADD/SEARCH/EXIT--- <- : " );
		if (s == "ADD")
			p.add();
			else if(s == "SEARCH")
			std::cout << "this is search" << std::endl;
			else if(s == "EXIT")
			return (0);
	}
	return (0);
}