#include "Contact.hpp"

void Contact::seting_first_name(void)
{
	while (1)
	{
		first_name = readline("input First Name   :");
		if (!first_name.empty())
			break;
	}
	this->first_name = first_name;
}

void Contact::seting_last_name(void)
{
	while(1)
	{
		last_name = readline("input Last Name     :");
		if (!last_name.empty())
			break;
	}
	this->last_name = last_name;
}

void Contact::seting_nick_name(void)
{
	while(1)
	{
		nick_name = readline("input Nick Name     :");
		if (!nick_name.empty())
			break;
	}
	this->nick_name = nick_name;
}

void Contact::seting_phone_number(void)
{
	while(1)
	{
		phone_number = readline("phone number     :");
		if (!phone_number.empty())
			break;
	}
	this->phone_number = phone_number;
}

void Contact::seting_darkest_secret(void)
{
	while(1)
	{
		darkest_secret = readline("input Last Name     :");
		if (!darkest_secret.empty())
			break;
	}
	this->darkest_secret = darkest_secret;
}

std::string Contact::get_first_name(void)
{
	return(this->first_name);
}
std::string Contact::get_last_name(void)
{
	return(this->last_name);
}
std::string Contact::get_nick_name(void)
{
	return(this->nick_name);
}
std::string Contact::get_phone_number(void)
{
	return(this->phone_number);
}
std::string Contact::get_darkest_secret(void)
{
	return(this->darkest_secret);
}