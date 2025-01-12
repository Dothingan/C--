#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int N = 1000;
    cout << "Dia chi cua N : " << &N << endl;
    int *ptr = &N; // ptr trỏ tới N
    cout << "Gia tri cua ptr : " << ptr << endl;
    //Toán tử giải tham chiếu
    cout << "Gia tri cua bien ma con tro ptr tro toi : " << *ptr << endl; 
    //Thay đổi N bằng ptr, *ptr và N là một
    *ptr = 280;
    cout << "Gia tri cua N sau thay doi : " << N << " " << *ptr << endl;
    return 0;
}