#pragma once
#include "Animals.h"
class Rabbit :public Animals
{
public:
	Rabbit()
	{
		std::cout << "In the Rabbit default constructor" << std::endl;
	}
	Rabbit(std::string n, int a) : Animals(n, a)//create animal with age and name using the animal constructor
	{
		std::cout << "In the Rabbit 2-arg constructor" << std::endl;
	}
	~Rabbit()
	{
		std::cout << "In the Rabbit destructor" << std::endl;
	}

     void move() //preform animal specific movement
	{
		std::cout << "I hop." << std::endl;
	}
};