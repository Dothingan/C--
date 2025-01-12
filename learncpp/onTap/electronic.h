#ifndef ELECTRONIC_H
#define ELECTRONIC_H

#include "product.h"

class electronic : public product
{
private:
    int warranty;
public:
    electronic(int id, string name, double price, int stock, int warranty);
    void display() const override;
};

#endif
