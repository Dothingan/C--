#include <iostream>
#include <string>
#include <cmath>

using namespace std;
class Rect {
    private:
        double l; 
        double h; 

    public:
        Rect(double length, double height) : l(length), h(height) {}
        double getArea() const {
            return l * h;
        }
};

class Circle {
    private:
        double r; 
    public:
        Circle(double radius) : r(radius) {}
        double getArea() const {
            return M_PI * r * r; 
        }
};

template <typename T>
double calculateArea(T* shape) {
    return shape->getArea();
}

int main() {
    Rect rectangle(5.0, 3.0);
    Circle circle(4.0);
    cout << "Diện tích hình chữ nhật: " << calculateArea(&rectangle) << endl;
    cout << "Diện tích hình tròn: " << calculateArea(&circle) << endl;

    return 0;
}
