// practiceeeee.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	//boolean values with std::cout will print 1 for true and 0 for false
	std::cout << true << "\n";
	std::cout << false << "\n";

    for (int i = 0; i < 25; i++) {
		std::cout << "#" ;
	}

	// set std::boolalpha to print true and false instead of 1 ,0
	bool b(1);
	std::cout << std::boolalpha <<std::endl;
	std::cout << b << std::endl;
	std::cout << !b << std::endl;

	for (int i = 0; i < 25; i++) {
		std::cout << "#";
	}
	// use std::noboolalpha to turn it back off to 1 ,0 instead of true and false
	std::cout << std::noboolalpha << std::endl;
	std::cout << b << std::endl;
	std::cout << !b << std::endl;


	int pause;
	std::cin >> pause;
    return 0;
}

