#include <iostream>
#include <cstring>
#include "book.h"

using namespace std;

Book::Book()
{
    this->author = NULL;
    this->title = NULL;
    this->genre = NULL;
    this->year = 0;
}

Book::Book(Book const& b)
{
    this->author = new char[strlen(b.author)+1];
    strncpy(this->author, b.author, strlen(b.author)+1);

    this->title = new char[strlen(b.title)+1];
    strncpy(this->title, b.title, strlen(b.title)+1);

    this->genre = new char[strlen(b.genre)+1];
    strncpy(this->genre, b.genre, strlen(b.genre)+1);

    this->year = b.year;
}

Book::~Book()
{
    delete[]this->author;
    delete[]this->title;
    delete[]this->genre;
}

 Book& Book::operator=(Book const& b)
 {
    if(this==&b)
        return* this;

    if(this->author)
		delete[]this->author;
    if(this->title)
		delete[]this->title;
    if(this->genre)
		delete[]this->genre;

    this->author = new char[strlen(b.author)+1];
	strncpy(this->author, b.author, strlen(b.author)+1);

    this->title = new char[strlen(b.title)+1];
	strncpy(this->title, b.title, strlen(b.title)+1);

    this->genre = new char[strlen(b.genre)+1];
    strncpy(this->genre, b.genre, strlen(b.genre)+1);

    this->year = b.year;

    return* this;
 }

const char* Book::getAuthor() const {
	return author;
}

const char* Book::getTitle() const {
	return title;
}

const char* Book::getGenre() const {
	return genre;
}

int Book::getYear() const {
	return year;
}
