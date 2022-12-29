#include <iostream>

#include "Singleton.h"

int main(int argc, char* argv[])
{
	Singleton* instance_1 = Singleton::getInstance();
	Singleton* instance_2 = Singleton::getInstance();

	std::cout << (instance_1 == instance_2);

	return 0;
}
