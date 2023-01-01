#include <iostream>
#include <cstdio>
#include <string>

class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;
public:
	void seting_first_name(std::string first_name);
	void seting_last_name(std::string last_name);
	void seting_nick_name(std::string nick_name);
	void seting_phone_number(std::string phone_number);
	void seting_darkest_secret(std::string darkest_secret);
	std::string get_first_name(void);
	std::string get_last_name(void);
	std::string get_nick_name(void);
	std::string get_phone_number(void);
	std::string get_darkest_secret(void);
};