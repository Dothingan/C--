// #include <iostream>
// #include <vector>
// // using namespace std;
// using IntVector = std::vector<int>;

// int main(){
//     IntVector numbers = {1, 2, 3, 4, 5};
//     for(int num: numbers){
//         std::cout << num << " ";
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct SinhVien
{
    int id;
    string name;
    double gpa;
};

//tao bi danh kieu cho ham so sanh
using CompareFunction = bool(*)(const SinhVien&, const SinhVien&);

//ham so sanh theo id
bool compareById(const SinhVien& a, const SinhVien& b){
    return a.id < b.id;
}


