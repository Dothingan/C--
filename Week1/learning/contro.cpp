#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vec{1,2,3,4,5,6};
    vector<int>::iterator iter;

    cout << "the vector elements are: " <<endl;
    cout <<"using begin() and end(): " <<endl;
    for(iter = vec.begin();iter<vec.end(); iter++){
        cout <<*iter<<" ";
    }
    cout <<endl;
    cout << "using [] opreator: " <<endl;
    for(int i = 0; i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout << endl;
    cout<< "using at() function: "<<endl;
    for(int i = 0; i<vec.size(); i++){
        cout<<vec.at(i)<<" ";
    }
    return 0;
}