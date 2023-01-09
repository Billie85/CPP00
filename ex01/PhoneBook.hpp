#ifndef PhoneBook_HPP
#define PhoneBook_HPP
#include <iostream>
#include "Contact.hpp"
#include <iomanip>

class PhoneBook
{
private:
	int count;
	int	base;
	Contact	contacts[8];
public:
	PhoneBook(void)//コンストラクタはクラスが作成された瞬間に一番最初に呼び出される関数だから主に初期化がで使われる
	{
		this->count = 0;
		this->base = 0;
	};
	~PhoneBook(){};
	void add(void);
	void search(void);
	//void display(Contact in);
};
#endif