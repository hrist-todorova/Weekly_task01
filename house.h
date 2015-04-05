#ifndef HOUSE_H_INCLUDED
#define HOUSE_H_INCLUDED

class House
{
public:
    House();
    House(House const&);
    ~House();
    House& operator=(House const&);

private:
    char* adress;
    char* owner;
    int rooms;
    int area;
};

#endif // HOUSE_H_INCLUDED
