/*Viết chương trình C++ để nhập một số nguyên và tìm lập phương của số đó.*/

#include <iostream>
#include <math.h>

using namespace std;

int lapphuong(int x){
    return x*x*x;
}

int main(){
    int x;
    cin >> x;
    cout << lapphuong(x);
}