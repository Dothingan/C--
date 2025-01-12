/*Sử dụng con trỏ trong C++, bạn hãy viết một chương trình C++ để nhận dữ liệu từ người dùng và tìm giá trị lớn nhất của một tập dữ liệu nội bộ.*/
#include <iostream>
using namespace std;

void findMaxValue(int* arr, int size, int* maxVal) {
    *maxVal = *arr; // Gán giá trị đầu tiên của mảng làm giá trị lớn nhất ban đầu
    for (int i = 1; i < size; ++i) {
        if (*(arr + i) > *maxVal) {
            *maxVal = *(arr + i); // Cập nhật giá trị lớn nhất
        }
    }
}

int main() {
    int size;

    cout << "Nhap so phan tu cua tap du lieu: ";
    cin >> size;

    if (size <= 0) {
        cout << "So phan tu phai lon hon 0!" << endl;
        return 1;
    }

    int* arr = new int[size]; // Cấp phát bộ nhớ động cho mảng

    cout << "Nhap " << size << " gia tri:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Gia tri thu " << i + 1 << ": ";
        cin >> *(arr + i); // Nhập giá trị qua con trỏ
    }

    int maxVal;
    findMaxValue(arr, size, &maxVal);

    cout << "Gia tri lon nhat trong tap du lieu la: " << maxVal << endl;

    delete[] arr; // Giải phóng bộ nhớ động
    return 0;
}
