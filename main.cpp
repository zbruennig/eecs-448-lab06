/**
*	@author
*	@date
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "TestSuite.h"

int main(int argc, char** argv)
{
	TestSuite tests;
	tests.runTests();

	std::cout << "\nEnd of program\n";

	return (0);

}
