/*Viết chương trình C++ để nhập 10 số nguyên trong một mảng một chiều, sau đó sắp xếp và in mảng đó theo thứ tự tăng dần*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> num(10);
    for(int i = 0; i < 10; i++){
        cin >> num[i];
    }
    vector<int> sortAsc = num;
    sort(sortAsc.begin(), sortAsc.end());

    vector<int> sortDesc = num;
    sort(sortDesc.begin(), sortDesc.end());

    for(int numbers:sortAsc){
        cout << numbers;
    }
    for(int numbers:sortDesc){
        cout << numbers;
    }
}