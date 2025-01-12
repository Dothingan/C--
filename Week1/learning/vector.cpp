#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int i, num;
    float avg, sum;

    cout << "enter number of students: ";
    cin >> num;

    vector<float> grd(num);
    vector<string> names(num);

    sum = 0;
    for(i = 0; i < num; i++){
        cout << "enter grade: ";
        cin>> grd[i];
        cin.get();

        cout << "enter name: ";
        getline(cin, names[i]);

        sum += grd[i];
    }
    avg = sum/num;
    for(i = 0; i<num; i++){
        if(grd[i] >= avg){
            cout << names[i] << ": " <<grd[i] << endl;
        }
    }
    return 0;
}