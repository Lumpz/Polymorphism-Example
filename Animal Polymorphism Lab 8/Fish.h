#pragma once
#include "Animals.h"
class Fish :public Animals
{
public:
	Fish()
	{
		std::cout << "In the Fish default constructor" << std::endl;
	}
	Fish(std::string n, int a) : Animals(n, a)//create animal with age and name using the animal constructor
	{
		std::cout << "In the Fish 2-arg constructor" << std::endl;
	}
	 ~Fish()
	{
		std::cout << "In the Fish destructor" << std::endl;
	}

	void move()//preform animal specific movement
	{
		std::cout << "I swim." << std::endl;
	}
};