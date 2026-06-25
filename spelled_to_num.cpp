#include "spelled_to_num.h"

int main()
{
	std::string current;
	std::cout << "Spell some numbers: ";

	while (std::cin >> current)
	{
		if (current == "zero")
		{
			std::cout << "0";
		}

		if (current == "one")
		{
			std::cout << "1";
		}

		if (current == "two")
		{
			std::cout << "2";
		}

		if (current == "three")
		{
			std::cout << "3";
		}

		if (current == "four")
		{
			std::cout << "4";
		}
	}

	return 0;
}
