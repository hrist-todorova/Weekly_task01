#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED

class Book
{
public:
    Book();
    Book(Book const&);
    ~Book();
    Book& operator=(Book const&);

    void setAuthor(const char* );
    void setTitle(const char* );
    void setGenre(const char* );
    void setYear(const int );

    char* getAuthor() const;
    char* getTitle() const;
    char* getGenre() const;
    char* getYear() const;

private:
    char* author;
    char* title;
    char* genre;
    int year;
};

#endif // BOOK_H_INCLUDED
