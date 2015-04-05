#ifndef CAT_H_INCLUDED
#define CAT_H_INCLUDED

class Cat
{
public:
    Cat();
    Cat(Cat const&);
    ~Cat();
    Cat& operator=(Cat const&);

private:
    char* name;
    char* breed;
    int age;
    char* colour;
};

#endif // CAT_H_INCLUDED
