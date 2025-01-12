#include <iostream>
using namespace std;

int main(){
    char a;
    cin >> a;
    
    if(a >= 'a' && a < 'z'){
        cout << char(a+1);
    }
    else if(a == 'z'){
        cout << 'a';
    }
}