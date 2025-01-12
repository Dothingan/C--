// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int a[n];
//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//     }
//     for(int i = 0; i < n; i++){
//     int count = 0;
//         for(int j = 0; j<n;j++){
//         if(a[i]>a[j])
//         count++;           
//         }
//         cout << count << " ";
//     }

// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<int> chieucao(n);

//     // Nhập chiều cao của các học sinh
//     for (int i = 0; i < n; i++) {
//         cin >> chieucao[i];
//     }

//     // Tạo bản sao và sắp xếp
//     vector<int> sapxepcc = chieucao;
//     sort(sapxepcc.begin(), sapxepcc.end());

//     // Vector để lưu số lượng học sinh thấp hơn
//     vector<int> count(n);
//     for (int i = 0; i < n; i++) {
//         // Tìm số học sinh có chiều cao thấp hơn chiều cao của học sinh i
//         int pos = lower_bound(sapxepcc.begin(), sapxepcc.end(), chieucao[i]) - sapxepcc.begin();
//         count[i] = pos; // pos chính là số học sinh thấp hơn
//     }

//     // In kết quả
//     for (int c : count) {
//         cout << c << " ";
//     }
//     cout << endl;

//     return 0;
// }



#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int chieucao[100000], sapxepcc[100000];
    for (int i = 0; i < n; i++) {
        cin >> *(chieucao + i); 
        *(sapxepcc + i) = *(chieucao + i); 
    }

    // Sắp xếp mảng phụ
    sort(sapxepcc, sapxepcc + n);

    for (int i = 0; i < n; i++) {
        int *pos = lower_bound(sapxepcc, sapxepcc + n, *(chieucao + i));
        int count = pos - sapxepcc;
        cout << count << " ";
    }

    return 0;
}




