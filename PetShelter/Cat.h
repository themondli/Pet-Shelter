#pragma once

#include <cstring>
#include <string>
#include "Pet.h"
#include <vector>
#include <iostream>

using namespace std;

class Cat :public Pet
{
private:
	string color;

public:
	void display() override
	{
		cout << "ID: " << this->id << "\nAge: " << this->age << "\nName: " << this->name << "\nColor: " << this->color;
	}
};