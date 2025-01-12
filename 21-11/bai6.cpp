#include <iostream>
#include <string>
using namespace std;

class InventoryItem
{
    private:
        string mota;
        double cost;
        int units;
    public:
        InventoryItem(){
            mota = "";
            cost = 0.0;
            units = 0;
        }
        InventoryItem(string m, double c, int u){
            mota = m;
            cost = c;
            units = u;
        }
        void setMota(string m){
            mota = m;
        };
        void setCost(double c){
            cost = c;
        };
        void setUnits(int u){
            units = u;
        };
        string getMota() const{
            return mota;
        }
        double getCost() const{
            return cost;
        }
        int getUnits() const{
            return units;
        }
};

int main(){
    const int NUM_ITEMS = 5;
    InventoryItem inv[NUM_ITEMS] = {
        InventoryItem(),
        InventoryItem("Item2", 5.49, 200),
        InventoryItem("Item3", 7.99, 150),
        InventoryItem("Item4", 20.00, 50),
        InventoryItem("Item5", 3.75, 300)
    };
    for (int i = 0; i < NUM_ITEMS; i++) {
        cout << "Item " << i + 1 << ": " << endl;
        cout << "Mota: " << inv[i].getMota() << endl;
        cout << "Cost: " << inv[i].getCost() << endl;
        cout << "Units: " << inv[i].getUnits() << endl;
        cout << endl;
    }

    return 0;
}


