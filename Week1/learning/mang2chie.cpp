#include <iostream>
using namespace std;

int main(){
    // int a[][2] ={{2,1}, {4,1},{5,1}, {8,9}};
    int a[][2] ={2,1,4,6,73,2,4,5,3};
    const int rows = sizeof(a) / sizeof(a[0]);
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < 2 ; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}