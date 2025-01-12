/*Viết một chương trình C++ để nhận 5 giá trị nguyên từ bàn phím. 5 giá trị này sẽ được lưu trữ trong một mảng bởi sử dụng một con trỏ. Sau đó, in các phần tử của mảng trên màn hình.*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int* arr = new int[5];
    for(int i = 0; i < 5; i++ ){
        cin >> *(arr+i);
        cout << arr[i] << " ";
    }
}