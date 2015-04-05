#include <iostream>
#include <cstring>
#include "house.h"

using namespace std;

House::House()
{
    this->adress = NULL;
    this->owner = NULL;
    this->rooms = 0;
    this->area = 0;
}

House::House(House const& other)
{
    this->adress = new char[strlen(other.adress)+1];
    strncpy(this->adress, other.adress, strlen(other.adress)+1);

    this->owner = new char[strlen(other.owner)+1];
    strncpy(this->owner, other.owner, strlen(other.owner)+1);

    this->rooms = other.rooms;

    this->area = other.area;

}

House::~House()
{
    delete[]this->adress;
    delete[]this->owner;
}

House& House::operator=(House const& other)
 {
    if(this==&other)
        return* this;

    if(this->adress)
		delete[]this->adress;
    if(this->owner)
		delete[]this->owner;

    this->adress = new char[strlen(other.adress)+1];
	strncpy(this->adress, other.adress, strlen(other.adress)+1);

    this->owner = new char[strlen(other.owner)+1];
	strncpy(this->owner, other.owner, strlen(other.owner)+1);

	this->rooms = other.rooms;

	this->area = other.area;

    return* this;
 }
