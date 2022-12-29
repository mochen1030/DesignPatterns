/*
	\brief: exercise 5.1
	\author: mc
	\time: 2022.11.2
 */

#include <iostream>

#include "TicketMaker.h"

int main(int argc, char* argv[])
{
	TicketMaker* maker_1 = TicketMaker::getInstance();
	TicketMaker* maker_2 = TicketMaker::getInstance();

	std::cout << "The first ticket number: " << maker_1->getNextYicketNumber() << "\n";
	std::cout << "The second ticket number: " << maker_2->getNextYicketNumber() << "\n";

	return 0;
}