#pragma once
#include <cstring>
#include <string>

class Pet
{
private:
	int id, age;
	string name;

public:
	Pet(int id, int age, string name): id(id), name(name), age(age){}

	friend class Dog;
	friend class Cat;
	friend class PetManager;
	virtual void display()
	{
		cout <<"ID: " << this->id <<"\nAge: " << this->age <<"\nName: " << this->name << endl;
	}
	virtual ~Pet() = default;

};