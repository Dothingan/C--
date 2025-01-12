/*Viết một chương trình C++ để nhập một chuỗi từ bàn phím và in ra màn hình độ dài của chuỗi đó.*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    string chuoi;
    getline(cin, chuoi);
    int count = chuoi.length();
    cout << count;

}