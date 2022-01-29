#pragma once
#include <string>
#include <iostream>
class Animals
{
public:
	Animals()
	{
		age = 0;
		std::cout << "In the Animals default constructor." << std::endl;
	}
	Animals(std::string n, int a)//create animal with age and name
	{
		name = n;
		age = a;
		std::cout << "In the Animals 2-argument constructor." << std::endl;
	}
	virtual ~Animals()
	{
	std::cout << "In the Animals destructor" << std::endl;
	}
	void setName(std::string n)
	{
		name = n;
	}
	void setAge(int a)
	{
		age = a;
	}
	std::string getName() { return name; }
	int getAge() { return age; }

	virtual void move() = 0; //purely virtual

private:
	std::string name;
	int age;

};