#include <iostream>
#include <cstring>
#include "product.h"

using namespace std;

Product::Product()
{
    this->name = NULL;
    this->brand = NULL;
    this->price = 0;
}

Product::Product(Product const& other)
{
    this->name = new char[strlen(other.name)+1];
    strncpy(this->name, other.name, strlen(other.name)+1);

    this->brand = new char[strlen(other.brand)+1];
    strncpy(this->brand, other.brand, strlen(other.brand)+1);

    this->price = other.price;
}

Product::~Product()
{
    delete[]this->name;
    delete[]this->brand;
}

Product& Product::operator=(Product const& other)
 {
    if(this==&other)
        return* this;

    if(this->name)
		delete[]this->name;
    if(this->brand)
		delete[]this->brand;

    this->name = new char[strlen(other.name)+1];
	strncpy(this->name, other.name, strlen(other.name)+1);

    this->brand = new char[strlen(other.brand)+1];
	strncpy(this->brand, other.brand, strlen(other.brand)+1);

	this->price = other.price;

    return* this;
 }
