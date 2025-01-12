#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string chuanHoaChuoi(string n) {
    string result = "";
    for (char ch : n) {
        if (isalpha(ch)) { 
            result += tolower(ch); 
        }
    }
    return result;
}

string Palindrome(string n){
    string z = "";
    for(int i = n.size()-1; i >= 0; --i){
        z += n[i];
    }
    return z;
}

int main(){
    string n;
    getline(cin, n);
    string z = chuanHoaChuoi(n);
    if(z==Palindrome(z)){
        cout << "Chuỗi là palindrome";
    }
    else {
        cout << "Chuỗi không phải là palindrome";
    }
}