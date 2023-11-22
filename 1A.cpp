#include <iostream>
using namespace std;

int countZeroes(int arr[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            count++;
        } else {
            break; // Stop counting once we encounter the first 1
        }
    }

    return count;
}

int main() {
    int arr1[] = {1, 1, 1, 1, 0, 0};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int result1 = countZeroes(arr1, n1);
    cout << "Output for arr1: " << result1 << endl; // Output: 2

    int arr2[] = {1, 0, 0, 0, 0};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int result2 = countZeroes(arr2, n2);
    cout << "Output for arr2: " << result2 << endl; // Output: 4

    return 0;
}