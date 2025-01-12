#include <iostream>
using namespace std;

template <typename t1, typename t2, typename t3>
auto sum(t1 a, t2 b, t3 c){
    return ((a>b)&&(b>c)) ? a+b : ((b>c)&&(c>a)) ? b+c : a+c;
}

void findMinMax(float arr[], float &minValue, float &maxValue) {
    minValue = arr[0];
    maxValue = arr[0];
    for (int i = 1; i < 5; ++i) {
        if (arr[i] <= minValue) {
            minValue = arr[i];
        }
        if (arr[i] >= maxValue) {
            maxValue = arr[i];
        }
    }
}

int main() {
 
    float a, b, c;
    cin >> a >> b >> c;
    cout << "Sum of the largest pair = " << sum(a, b, c) << endl;

    float arr[5];
    for (int i = 0; i < 5; ++i) {
        cin >> arr[i];
    }

    float minValue, maxValue;
    findMinMax(arr, minValue, maxValue);
    cout << "Min = " << minValue << ", Max = " << maxValue << endl;

    return 0;
}



