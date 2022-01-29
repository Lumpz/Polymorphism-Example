#pragma once
#include "Animals.h"
class Dog :public Animals
{
public:
	Dog()
	{
		std::cout << "In the Dog default constructor" << std::endl;
	}
	Dog(std::string n, int a) : Animals(n, a) //create animal with age and name using the animal constructor
	{
		std::cout << "In the Dog 2-arg constructor" << std::endl;
	}
	 ~Dog() 
	{
		std::cout << "In the Dog destructor" << std::endl;
	}

	 void move()//preform animal specific movement
	{
		std::cout << "I run." << std::endl;
	}
};