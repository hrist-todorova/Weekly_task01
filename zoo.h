#ifndef ZOO_H_INCLUDED
#define ZOO_H_INCLUDED

class Zoo
{
public:
    Zoo();
    Zoo(Zoo const&);
    ~Zoo();
    Zoo& operator=(Zoo const&);

private:
    char* name;
    char* location;
    int area;
    int species;
    int ticket_price;
};


#endif // ZOO_H_INCLUDED
