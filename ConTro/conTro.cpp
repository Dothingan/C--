#include <iostream>
using namespace std;

int main(){
    int *ptr, a= 10;
    ptr = &a;
    cout << *ptr << endl;
    *ptr = 20;
    cout << a;
}