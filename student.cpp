#include <iostream>
#include <cstring>
#include "student.h"

using namespace std;

Student::Student()
{
    this->name = NULL;
    this->number = 0;
    this->fav_subject = NULL;
}

Student::Student(Student const& other)
{
    this->name = new char[strlen(other.name)+1];
    strncpy(this->name, other.name, strlen(other.name)+1);

    this->number = other.number;

    this->fav_subject = new char[strlen(other.fav_subject)+1];
    strncpy(this->fav_subject, other.fav_subject, strlen(other.fav_subject)+1);
}

Student::~Student()
{
    delete[]this->name;
    delete[]this->fav_subject;
}

Student& Student::operator=(Student const& other)
 {
    if(this==&other)
        return* this;

    if(this->name)
		delete[]this->name;
    if(this->fav_subject)
		delete[]this->fav_subject;

    this->name = new char[strlen(other.name)+1];
	strncpy(this->name, other.name, strlen(other.name)+1);

	this->number = other.number;

    this->fav_subject = new char[strlen(other.fav_subject)+1];
	strncpy(this->fav_subject, other.fav_subject, strlen(other.fav_subject)+1);

    return* this;
 }
