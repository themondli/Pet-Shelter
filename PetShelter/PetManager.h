#pragma once

#include <cstring>
#include <string>
#include "Pet.h"
#include "Dog.h"
#include "Cat.h"
#include <vector>
#include <iostream>

using namespace std;

class PetManager
{
private:
	vector<Pet*> pets;

public:
	void addPet(Pet* pet)
	{
		pets.push_back(pet);
	}

	void displayAllPets() const
	{

		for (auto& i : pets)
		{
			if (dynamic_cast<Dog*>(i))
			{
				i->display();
			}
			else
			{
				i->display();
			}

		}
	}
};