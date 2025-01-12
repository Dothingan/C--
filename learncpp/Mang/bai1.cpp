/*viết chương trình C++ nhập 10 giá trị nguyên, sau đó tìm giá trị lớn nhất, nhỏ nhất, 
tìm giá trị có tần suất xuất hiện nhiều nhất, sắp xếp mảng theo thứ tự 
tăng dần, giảm dần và hiển thị kết quả.*/


#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> num(10);
    for(int i = 0; i < 10; i++){
        cin >> num[i];
    }

    //tim gia tri lon nhat, nho nhat
    int maxValue = *max_element(num.begin(), num.end());
    int minValue = *min_element(num.begin(), num.end());

    //tim gia tri co tan suat xuat hien nhieu nhat
    unordered_map<int, int> freq;
    for(int numbers : num){
        freq[numbers]++;
    }

    //hien gia tri
    int mostFrequent = num[0];
    int maxFreq = 0;
    for(const auto& pair:freq){
        if(pair.second > maxFreq){
            mostFrequent = pair.first;
            maxFreq = pair.second;
        }
    }

    //sap xep tang dan, giam dan
    vector<int> sortAsc = num;
    sort(sortAsc.begin(), sortAsc.end());

    vector<int> sortDesc = num;
    sort(sortDesc.begin(), sortDesc.end());

    cout << "gia tri lon nhat" << maxValue;
    cout << "Gia tri nho nhat " << minValue;
    cout << "tan so xuat hien nhieu nhat " << mostFrequent;
    cout << "thu tu tang dan";
    for(int numbers : sortAsc){
        cout << numbers;
    }
    cout << "thu tu giam dan";
    for(int numbers: sortDesc){
        cout << numbers;
    }
}