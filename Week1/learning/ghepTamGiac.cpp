#include <iostream>
using namespace std;

int main(){
    int T, a, b, c;
    cin >> T;

    for(T; T>0; T--){
        cin >> a >> b >> c;
        if((a+b>c)&&(a+c>b)&&(b+c>a)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}