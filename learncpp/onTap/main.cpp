#include "electronic.h"
#include "groceryItem.h"
#include "inventory.h"

int main(){
    inventory inventory;

    inventory.addProduct(new electronic(1, "laptop", 1500, 10, 24));
    inventory.addProduct(new groceryItem(2, "Apple", 2.4, 50, "2025-01-31"));

    cout << "inventory " << endl;
    inventory.displayInventory();

    inventory.sellProduct(1, 3);

    cout << "update inventory: " << endl;
    inventory.displayInventory();

    return 0;
}