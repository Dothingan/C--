#include "inventory.h"

inventory::~inventory() {
    for(auto p:products){
        delete p;
    }
}

void inventory::addProduct(product* p){
    products.push_back(p);
}

void inventory::sellProduct(int is, int quantity){
    for(auto p:products){
        if(p->getID() == id){
            if(p->getStock() >= quantity){
                p->reduceStock(quantity);
                cout << "sold " << quantity << "items of product ID " << id << endl;
            }else{
                cout << "Not enough stock for product ID" << id << endl;
            }
            return;
        }
    }
    cout << "product id "<< id <<"not found! "<< endl;
}