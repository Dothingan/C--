#include <iostream>
using namespace std;

int main(){
    int abc;
    int sum = 0;
    cin >> abc;
    int number = abc;
    if((abc>=100) && (abc<=999)){
        while(number>0){
            sum += number - (number/10)*10;
            number = number/10;
        }
        cout << sum;
    }
    else{
        cout << "Yeu cau nhap so nguyen co 3 chu so";
    }
}