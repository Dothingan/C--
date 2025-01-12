#include <iostream>
#include <string>
using namespace std;

int main() {
    string z;
    cin >> z;
    for (int i = z.size() - 1; i >= 0; --i) {
        cout << z[i];
    }
    return 0;
}
