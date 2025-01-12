#include <iostream>
#include <string>

using namespace std;

void chuoi(string *a, string *b, string **c) {
    *c = new string; 
    **c = *a + *b; 
}

int main() {
    string a, b;
    cin >> a >> b;
    string *c = nullptr;
    chuoi(&a, &b, &c); 
    cout << *c << endl; 
    delete c;  
    return 0;
}
