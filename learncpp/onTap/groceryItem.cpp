#include "groceryItem.h"

groceryItem::groceryItem(int id, string name, double price, int stock, string expiryDate)
    : product(id, name, price, stock), expiryDate(expiryDate){}

void groceryItem::display() const{
    cout << "grocery item: " << getName() << "(ID: " << getID() << ")"
        <<", price: " << getPrice() << ", stock " << getStock()
        <<", expiry date: " << expiryDate << endl; 
}