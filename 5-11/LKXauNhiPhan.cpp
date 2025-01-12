// #include <iostream>
// #include <math.h>
 
// using namespace std;
 
// int N;
 
// string a[100009];
 
// int main(){
//     cin >> N;
//     int n = 2;
//     a[0] = "0";
//     a[1] = "1";
//     int k = 0;
//     while (a[k].length() < N){
//         a[n++] = a[k] + "0";
//         a[n++] = a[k] + "1";
//         k++;
//     }
//     for (int i = k; i < n; i++)
//         cout << a[i] << endl;
// }

#include <iostream>
#include<cmath>

using namespace std;
int main(){
    long long n;
    cin >> n;
    int total = pow(2,n);
    char *br = new char[n +1];
    br[n]='\0';
    for(int i = 0;i <total;i++){
        int num =i;
        char *prt = br + n-1;
        for(int j=0;j<n;j++){
            *prt = (num%2)+'0';
            num/=2;
            prt--;
        }
        cout << br << endl;
    }
    return 0;
}
