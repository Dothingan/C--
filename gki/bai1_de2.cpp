#include <iostream>
#include <vector>

using namespace std;
template <typename T>
void nhapDuLieu(vector<T>& vec) {
    T value;
    while (cin >> value && value != -1) {
        vec.push_back(value);
    }
}

template <typename T, typename U>
void nhapDuLieu(T& var1, U& var2) {
    cin >> var1 >> var2;
}

template <typename T>
T tinhTB(const vector<T>& vec) {
    if (vec.empty()) {
        cout << "Vector rong" << endl;
        return static_cast<T>(0); 
    }
    
    T sum = 0;
    for (const T& value : vec) {
        sum += value;
    }
    return sum / vec.size(); 
}

template <typename T>
void tinhTB(const T& a, const T& b, double* result) {
    *result = static_cast<double>(a + b) / 2;
}

int main() {
    vector<int> vecInt;
    vector<double> vecDouble;
    int num1Int, num2Int;
    double num1Double, num2Double;
    double avgIntPair, avgDoublePair;
    cout << "Nhap vector int (-1 de ket thuc): ";
    nhapDuLieu(vecInt);
    cout << "Nhap vector double (-1 de ket thuc): ";
    nhapDuLieu(vecDouble);
    if (!vecInt.empty()) {
        cout << "Trung binh vector int: " << tinhTB(vecInt) << endl;
    }
    if (!vecDouble.empty()) {
        cout << "Trung binh vector double: " << tinhTB(vecDouble) << endl;
    }
    cout << "Nhap 2 so int: ";
    nhapDuLieu(num1Int, num2Int);
    tinhTB(num1Int, num2Int, &avgIntPair);
    cout << "Trung binh 2 so int: " << avgIntPair << endl;
    cout << "Nhap 2 so double: ";
    nhapDuLieu(num1Double, num2Double);
    tinhTB(num1Double, num2Double, &avgDoublePair);
    cout << "Trung binh 2 so double: " << avgDoublePair << endl;

    return 0;
}
