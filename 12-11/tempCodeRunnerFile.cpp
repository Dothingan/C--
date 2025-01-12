#include <iostream>
#include <algorithm>
using namespace std;
float maxSumOfTwo(float a, float b, float c) {
    float max1 = max(a, max(b, c));
    float min1 = min(a, min(b, c));
    float mid = a + b + c - max1 - min1;
    return max1 + mid;
}


void findMinMax(float arr[], int size, float &minValue, float &maxValue) {
    minValue = arr[0];
    maxValue = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < minValue) {
            minValue = arr[i];
        }
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }
}

int main() {
 
    float a, b, c;
    cin >> a >> b >> c;
    cout << "Sum of the largest pair = " << maxSumOfTwo(a, b, c) << endl;
    int size;
    cin >> size;

    float arr[size];
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    float minValue, maxValue;
    findMinMax(arr, size, minValue, maxValue);
    cout << "Min = " << minValue << ", Max = " << maxValue << endl;

    return 0;
}