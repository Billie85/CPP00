#include "Contact.hpp"
#include <cstdio>


int main(int argc, char *argv[])
{
	Contact z;

	z.set_first_name(argv[1]);
	printf("%s\n", z.get_first_name().c_str());
}