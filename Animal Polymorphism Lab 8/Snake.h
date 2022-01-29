#pragma once
#include "Animals.h"
class Snake :public Animals
{
public:
	Snake()
	{
		std::cout << "In the Snake default constructor" << std::endl;
	}
	Snake(std::string n, int a) : Animals(n, a)//create animal with age and name using the animal constructor
	{
		std::cout << "In the Snake 2-arg constructor" << std::endl;
	}
	 ~Snake()
	{
		std::cout << "In the Snake destructor" << std::endl;
	}

	void move()//preform animal specific movement
	{
		std::cout << "I slither." << std::endl;
	}
};