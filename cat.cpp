#include <iostream>
#include <cstring>
#include "cat.h"

using namespace std;

Cat::Cat()
{
    this->name = NULL;
    this->breed = NULL;
    this->age = 0;
    this->colour = NULL;
}

Cat::Cat(Cat const& other)
{
    this->name = new char[strlen(other.name)+1];
    strncpy(this->name, other.name, strlen(other.name)+1);

    this->breed = new char[strlen(other.breed)+1];
    strncpy(this->breed, other.breed, strlen(other.breed)+1);

    this->age = other.age;

    this->colour = new char[strlen(other.colour)+1];
    strncpy(this->colour, other.colour, strlen(other.colour)+1);
}

Cat::~Cat()
{
    delete[]this->name;
    delete[]this->breed;
    delete[]this->colour;
}

Cat& Cat::operator=(Cat const& other)
 {
    if(this==&other)
        return* this;

    if(this->name)
		delete[]this->name;
    if(this->breed)
		delete[]this->breed;
    if(this->colour)
		delete[]this->colour;

    this->name = new char[strlen(other.name)+1];
	strncpy(this->name, other.name, strlen(other.name)+1);

    this->breed = new char[strlen(other.breed)+1];
	strncpy(this->breed, other.breed, strlen(other.breed)+1);

	this->age = other.age;

    this->colour = new char[strlen(other.colour)+1];
	strncpy(this->colour, other.colour, strlen(other.colour)+1);

    return* this;
 }
