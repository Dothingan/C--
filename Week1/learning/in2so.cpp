#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n;
    cin >> n;
    srand(time(0));
    int a = rand() % (n + 1); 
    int b = n - a; 
    cout << a << " " << b;
    return 0;
}
