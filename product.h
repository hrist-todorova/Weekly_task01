#ifndef PRODUCT_H_INCLUDED
#define PRODUCT_H_INCLUDED

class Product
{
public:
    Product();
    Product(Product const&);
    ~Product();
    Product& operator=(Product const&);

private:
    char* name;
    char* brand;
    int price;
};

#endif // PRODUCT_H_INCLUDED
