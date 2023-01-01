#include "Contact.hpp"
#include <cstdio>


int main(int argc, char *argv[])
{
	Contact z;
	z.seting_darkest_secret("ayumi");
	printf("%s\n", z.get_darkest_secret().c_str());
}