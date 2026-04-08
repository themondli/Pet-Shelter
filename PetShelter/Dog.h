#pragma once
#include <cstring>
#include <string>
#include "Pet.h"
#include <vector>
#include <iostream>

using namespace std;

class Dog :public Pet
{
private:
	string breed;

public:
	void display() override
	{
		cout << "ID: " << this->id << "\nAge: " << this->age << "\nName: " << this->name << "\nBreed: " << this->breed;
	}
};