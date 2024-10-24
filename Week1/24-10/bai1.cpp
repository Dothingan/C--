#include <iostream>
using namespace std;

double factorial(int n) {
    double result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main(){
    double epsilon;
    // int n = 1;
    double e = 1.0;
    cin >> epsilon;
    if(0<epsilon && epsilon<1){
        for(int n = 1; ;n++){
            e+=1/factorial(n);
            if(1/factorial(n)<epsilon)
                break;
        }
        printf("%.5f", e);
    }
    else{
        cout << "Yeu cau nhap 0< epsilon <1";
    }
}