#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <cstdio>
#include <string>
#include <readline/readline.h>
#include <readline/history.h>

class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;
public:
	void seting_first_name(void);
	void seting_last_name(void);
	void seting_nick_name(void);
	void seting_phone_number(void);
	void seting_darkest_secret(void);
	std::string get_first_name(void);
	std::string get_last_name(void);
	std::string get_nick_name(void);
	std::string get_phone_number(void);
	std::string get_darkest_secret(void);
};

#endif