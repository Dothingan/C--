#include "electronic.h"

electronic::electronic(int id, string name, double price, int stock, int warranty)
    :product(id, name, price, stock), warranty(warranty){}

void electronic::display() const{
    cout << "electronic product: " << getName()<< "(ID " << getID() << ")"
        << ", price: " << getPrice()<< ", stock: " << getStock()
        <<", warranty: "<< warranty << " months" << endl;
}