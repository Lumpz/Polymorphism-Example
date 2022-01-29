//Blake Bonheim - Animal Polymorphism
#include <iostream>
#include "Animals.h"
#include "Dog.h"
#include "Rabbit.h"
#include "Fish.h"
#include "Snake.h"
#include <string>	
using namespace std;

int main()
{
	Animals* animals[5]; //create the base class for all animal selections
	int choice, age; 
	string name;
	srand(100); //random seed
	for (int i = 0; i < 5; ++i) //ask the user 5 times for 5 pets and 5 names
	{

		cout << "1-Dog" << endl;
		cout << "2-Rabbit" << endl;
		cout << "3-Fish" << endl;
		cout << "4-Snake" << endl;
		cout << "Selection:   ";
		cin >> choice; 


		cout << "Enter the name of your animal:   ";
		cin.ignore();
		getline(cin, name);
		age = rand() % 21;

		switch (choice) //determine which of 4 choices have been chosen, or an invalid input
		{
		case 1:
			animals[i] = new Dog(name, age); //create animal based  on selection with name and age 
			break;
		case 2:
			animals[i] = new Rabbit(name, age);//create animal based  on selection with name and age 
			break;
		case 3:
			animals[i] = new Fish(name, age);//create animal based  on selection with name and age 
			break;
		case 4:
			animals[i] = new Snake(name, age);//create animal based  on selection with name and age 
			break;
		default:
			cout << "Invalid selection." << endl;
			break;


		}

	

	}

	for (int i = 0; i < 5; ++i) //show the name and age of each animal created
	{
		cout << "My name is " << animals[i]->getName();
		cout << ", amd I am " << animals[i]->getAge() << " year old. " << endl;
		animals[i]->move(); //use the animals move() function
	}

	for (Animals* A : animals) //delete each animal
	{
		delete A;
		A = NULL;
	}

	system("pause");
		return 0;
	
	
}