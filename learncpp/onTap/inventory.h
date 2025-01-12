#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include "process.h" // Đảm bảo rằng product được định nghĩa đúng

class inventory {
private:
    std::vector<product*> products; // Sử dụng std::vector

public:
    ~inventory();
    void addProduct(product* p);
    void sellProduct(int id, int quantity);
    void displayInventory() const;
};

#endif
