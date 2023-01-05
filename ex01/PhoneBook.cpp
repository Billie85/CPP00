#include "PhoneBook.hpp"

/* void PhoneBook::display(Contact in)
{
	Contact c;

	std::cout << "*--------------------------------------------*" << std::endl;
	std::cout << "| Index | First Name | Last Name | Nick Name |" << std::endl;
	std::cout << "-----first name is -----" << c.get_first_name() << std::endl;
} */

//getlineを使おうと思ったけどうまく動いてくれなかったmainの中に直接書いてあげる上手く動いてくれるけど。
//空のフィールドというのがよく理解できない。empty関数を使うべきなのかな？
void PhoneBook::add(void)
{
	printf("b\n");
	this->contacts[this->index].seting_first_name();
	this->contacts[this->index].seting_last_name();
	this->contacts[this->index].seting_nick_name();
	this->contacts[this->index].seting_phone_number();
	this->contacts[this->index].seting_darkest_secret();
}