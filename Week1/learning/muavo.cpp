#include <iostream>
using namespace std;

int main(){
    int a, b, x, y;
    cin >> a >> b>>x>>y;
    if((a>=0&&a<=100)&&(b>=0&&b<=100)&&
        (x>=1&&x<=100)&&(y>=1&&y<=100)){
            cout << a*x+y*b;
        }
}