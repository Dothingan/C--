#include <iostream>
#include <cmath>
#include <string>

using namespace std;
class Circle {
    private:
        double radius; 
        string color; 

    public:
        Circle() : radius(1.0), color("red") {}
        Circle(double r) : radius(r), color("red") {}
        Circle(double r, const string& c) : radius(r), color(c) {}
        double getRadius() const {
            return radius;
        }
        string getColor() const {
            return color;
        }
        double getArea() const {
            return M_PI * radius * radius;
        }
};

int main() {
    Circle c1(2.0, "blue");
    Circle c2(2.0);
    Circle c3;

    cout << "Circle c1: Radius = " << c1.getRadius()
              << ", Color = " << c1.getColor()
              << ", Area = " << c1.getArea() << endl;

    cout << "Circle c2: Radius = " << c2.getRadius()
              << ", Color = " << c2.getColor()
              << ", Area = " << c2.getArea() << endl;

    cout << "Circle c3: Radius = " << c3.getRadius()
              << ", Color = " << c3.getColor()
              << ", Area = " << c3.getArea() << endl;

    return 0;
}
