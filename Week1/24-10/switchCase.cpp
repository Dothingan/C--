#include <iostream>
using namespace std;

int main(){
    int gioitinh;
    double chieucao;
    cin >> gioitinh >> chieucao;
    switch(gioitinh){
        case 0:
        if(chieucao>=1.85){
            cout<<"Tall";
        }
        else if(chieucao>=1.75){
            cout<<"Normal";
        }
        else{
            cout<<"Short";
        }
        break;
        case 1:
        if(chieucao>=1.75){
            cout<<"Tall";
        }
        else if(chieucao>=1.60){
            cout<<"Normal";
        }
        else{
            cout<<"Short";
        }
        break;
        default:
        cout<<"Wrong Input";
        break;

    }
}