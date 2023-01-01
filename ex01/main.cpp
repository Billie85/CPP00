#include "Contact.hpp"

int main(void)
{
	Contact z;
	z.seting_darkest_secret("hage");
	printf("%s\n", z.get_darkest_secret().c_str());
}