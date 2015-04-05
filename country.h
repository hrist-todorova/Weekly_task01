#ifndef COUNTRY_H_INCLUDED
#define COUNTRY_H_INCLUDED

class Country
{
public:
    Country();
    Country(Country const&);
    ~Country();
    Country& operator=(Country const&);

private:
    char* name;
    int population;
    int cities;
    int villages;
    char* capital;
};

#endif // COUNTRY_H_INCLUDED
