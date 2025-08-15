#include <iostream>
using namespace std;

double computeAverage(const int arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size; 
}

int findMin(const int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int findMax(const int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int size = 10;
    const int arr[] = {3, 8, 1, 9, 4, 7, 2, 5, 6, 0};

   
    cout << "Array contents: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    double average = computeAverage(arr, size);
    int minVal = findMin(arr, size);
    int maxVal = findMax(arr, size);

    cout << "Average = " << average << endl;
    cout << "Min = " << minVal << endl;
    cout << "Max = " << maxVal << endl;

    return 0;
}
