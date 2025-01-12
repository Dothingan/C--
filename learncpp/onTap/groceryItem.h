#ifndef GROCERYITEM_H
#define GROCERYITEM_H

#include "product.h" // Đảm bảo rằng product được định nghĩa đúng
#include <string>
using namespace std;

class groceryItem : public product {
private:
    string expiryDate;

public:
    // Constructor
    groceryItem(int id, string name, double price, int stock, string expiryDate);

    // Ghi đè phương thức display
    void display() const override;
};

#endif
