#include <iostream>
#include <cstring>
#include "zoo.h"

using namespace std;

Zoo::Zoo()
{
    this->name = NULL;
    this->location = NULL;
    this->area = 0;
    this->species = 0;
    this->ticket_price = 0;
}

Zoo::Zoo(Zoo const& other)
{
    this->name = new char[strlen(other.name)+1];
    strncpy(this->name, other.name, strlen(other.name)+1);

    this->location = new char[strlen(other.location)+1];
    strncpy(this->location, other.location, strlen(other.location)+1);

    this->area = other.area;

    this->species = other.species;

    this->ticket_price = other.ticket_price;
}

Zoo::~Zoo()
{
    delete[]this->name;
    delete[]this->location;
}

Zoo& Zoo::operator=(Zoo const& other)
 {
    if(this==&other)
        return* this;

    if(this->name)
		delete[]this->name;
    if(this->location)
		delete[]this->location;

    this->name = new char[strlen(other.name)+1];
	strncpy(this->name, other.name, strlen(other.name)+1);

    this->location = new char[strlen(other.location)+1];
	strncpy(this->location, other.location, strlen(other.location)+1);

	this->area = other.area;

	this->species = other.species;

	this->ticket_price = other.ticket_price;


    return* this;
 }
