#include <iostream>
using namespace std;

long long fibonacci(int n) {
    long long a = 0, b = 1, next;
    for(int i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    
    return n == 1 ? a : b; 
}

int main() {
    int n;
    cin >> n;

    // if (n < 1 || n > 90) {
    //     return 1;
    // }

    long long result = fibonacci(n);
    cout << result << endl;

    return 0;
}
