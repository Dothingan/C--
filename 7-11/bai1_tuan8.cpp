// #include <iostream>
// #include <vector>

// using namespace std;

// void gia(){
//     vector<double> gia(100);
//     for(int i = 0; i<100; i++){
//         cin >> gia[i];
//         if(gia[i] <=0)
//         break;
//     }
    
// }

// bool min_gia(const gia& a, const gia& b ){
//     retrun a.gia<b.gia;
// }

// bool max_gia(const gia& a, const gia& b){
//     retrun a.gia>b.gia;
// }

// double avg_gia(a, b){
//     retrun a+b/2;
// }

// int main(){
//     vector<gia> gia = {1.1, 2.2, 3.3, 1.0};
//     min_gia(gia);
// }

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

double min_gia(const vector<double>& gia) {
    return *min_element(gia.begin(), gia.end());
}

double max_gia(const vector<double>& gia) {
    return *max_element(gia.begin(), gia.end());
}

double avg_gia(const vector<double>& gia) {
    double sum = accumulate(gia.begin(), gia.end(), 0.0);
    return sum / gia.size();
}

int main() {
    vector<double> gia = {1.1, 2.2, 3.3, 1.0};

    // Tính toán giá trị thấp nhất, cao nhất và trung bình
    double minPrice = min_gia(gia);
    double maxPrice = max_gia(gia);
    double avgPrice = avg_gia(gia);

    // Hiển thị kết quả
    cout << "Giá thấp nhất: " << minPrice << endl;
    cout << "Giá cao nhất: " << maxPrice << endl;
    cout << "Giá trung bình: " << avgPrice << endl;

    return 0;
}
