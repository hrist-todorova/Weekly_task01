#include <iostream>
#include <cstring>
#include "country.h"

using namespace std;

Country::Country()
{
    this->name = NULL;
    this->population = 0;
    this->cities = 0;
    this->villages = 0;
    this->capital = NULL;
}

Country::Country(Country const& other)
{
    this->name = new char[strlen(other.name)+1];
    strncpy(this->name, other.name, strlen(other.name)+1);

    this->population = other.population;

    this->cities = other.cities;

    this->villages = other.villages;

    this->capital = new char[strlen(other.capital)+1];
    strncpy(this->capital, other.capital, strlen(other.capital)+1);
}

Country::~Country()
{
    delete[]this->name;
    delete[]this->capital;
}

Country& Country::operator=(Country const& other)
 {
    if(this==&other)
        return* this;

    if(this->name)
		delete[]this->name;
    if(this->capital)
		delete[]this->capital;

    this->name = new char[strlen(other.name)+1];
	strncpy(this->name, other.name, strlen(other.name)+1);

	this->population = other.population;

	this->cities = other.cities;

	this->villages = other.villages;

    this->capital = new char[strlen(other.capital)+1];
	strncpy(this->capital, other.capital, strlen(other.capital)+1);

    return* this;
 }
