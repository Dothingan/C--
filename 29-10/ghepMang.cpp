// #include <iostream>
// #include <vector>
// #include <algorithm> 
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n;
//     vector<int> a(n); 
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     cin >> m;
//     vector<int> b(m); 
//     for (int j = 0; j < m; j++) {
//         cin >> b[j];
//     }
//     vector<int> c;
//     c.insert(c.end(), a.begin(), a.end()); 
//     c.insert(c.end(), b.begin(), b.end()); 
//     sort(c.begin(), c.end());
//     for (int k = 0; k < c.size(); k++) {
//         cout << c[k] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     int n, m;

//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     cin >> m;
//     vector<int> b(m);
//     for (int i = 0; i < m; i++) {
//         cin >> b[i];
//     }


//     vector<int> c(n + m);
//     for (int i = 0; i < n; i++) {
//         c[i] = a[i];
//     }
//     for (int i = 0; i < m; i++) {
//         c[n + i] = b[i];
//     }


//     sort(c.begin(), c.end());


//     for (int i = 0; i < n + m; i++) {
//         cout << c[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> m;
    int b[m];
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    int c[n+m];
    for(int i = 0; i < n; i++){
        c[i]=a[i];
    }
    for(int i = 0; i < m; i++){
        c[n+i]=b[i];
    }
    sort(c, c+n+m);
    for(int i = 0; i<n+m; i++){
        cout<<c[i]<<" ";
    }
    return 0;
}


