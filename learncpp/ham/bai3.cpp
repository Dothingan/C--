/*Viết chương trình C++ để tìm giá trị trung bình với hàm friend.*/
#include <iostream>

using namespace std;

class Numbers{
    private:
        double num1;
        double num2;
    public:
        //khoi tao gia tri
        Numbers(double n1, double n2) : num1(n1), num2(n2){}

        //khai bao friend function
        friend double calculateAvg(const Numbers& numbers);

};

//dinh nghia friend function
double calculateAvg(const Numbers& numbers){
    return (numbers.num1 + numbers.num2)/2.0;
}

int main(){
    double a,b;
    cin >> a >> b;
    Numbers numbers(a, b);
    cout << calculateAvg(numbers);
    return 0;
}