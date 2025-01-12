/* Viết một hàm có tên là calculate() lấy hai số nguyên và một ký tự biểu diễn một trong các phép toán sau: +, -, *, / hoặc % (phần dư). 
Sử dụng câu lệnh switch để thực hiện phép toán thích hợp trên các số nguyên và trả về kết quả. Nếu một toán tử không hợp lệ được truyền vào hàm, 
hàm sẽ in ra thông báo lỗi. Đối với toán tử chia, hãy thực hiện phép chia số nguyên và đừng lo lắng về phép chia cho số không*/

#include <iostream>
using namespace std;

int calculate(int a, int b, char c) {
    switch (c) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b != 0) {
                return a / b;
            } else {
                cout << "Loi: Khong the chia cho 0." << endl;
                return 0;
            }
        case '%':
            if (b != 0) {
                return a % b;
            } else {
                cout << "Loi: Khong the chia cho 0." << endl;
                return 0;
            }
        default:
            return -1; // Trả về -1 để báo hiệu toán tử không hợp lệ
    }
}

int main() {
    int a, b;
    char c;

    cout << "Nhap hai so nguyen: ";
    cin >> a >> b;

    while (true) {
        cout << "Nhap toan tu (+, -, *, /, %): ";
        cin >> c;

        int result = calculate(a, b, c);

        if (result == -1) {
            cout << "Toan tu khong hop le. Vui long nhap lai." << endl;
        } else {
            cout << "Ket qua: " << result << endl;
            break; // Thoát khỏi vòng lặp nếu toán tử hợp lệ
        }
    }

    return 0;
}
