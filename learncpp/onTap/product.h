#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>
using namespace std;

class product
{
private:
    int productID;
    string name;
    double price;
    int stock;
public:
    product(int id, string name, double price, int stock);

    int getID() const{return productID;}
    string getName() const { return name;}
    double getPrice() const {return price;}
    int getStock() const {return stock;}
    //ham display() la ham ao de ho tro tinh da hinh
    virtual void display() const;

    virtual ~product(){};
};

#endif
