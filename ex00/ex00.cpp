#include <iostream>
#include <cctype>
#include <string.h>

int main(int argc, char *argv[]) {

	//std::cout << argv[0] << std::endl;
	/* if (argv[0] == std::string("./a.out")){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	} */

	if (argc == 1) std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::string str;
	for(int i = 1; i < argc; i++)
	{
		str = argv[i];
		for(int j = 0; j < str.length(); j++)
		{
			std::cout << (char)(toupper(str[j]));
		}
		std::cout << " ";
	}
	std::cout << std::endl;
	return 0;
}