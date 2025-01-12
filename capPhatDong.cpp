#include <iostream>
#include <string> and using namespace std
#include <cstring>

using namespace std;

void chuoi(string *a, string *b){
    string *c = new string;
    memcpy(c, a, b);
}

int main(){
    string a, b;
    cin >> a >> b;
    chuoi(a, b);
}

