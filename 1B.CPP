#include <iostream>
using namespace std;

void moveZeroesToEnd(int arr[], int n) {
    int nonZeroIndex = 0; // Initialize a pointer to keep track of non-zero elements

    // Iterate through the array
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            // If the current element is non-zero, move it to the nonZeroIndex position
            arr[nonZeroIndex] = arr[i];
            nonZeroIndex++;
        }
    }

    // Fill the remaining positions with zeros
    for (int i = nonZeroIndex; i < n; i++) {
        arr[i] = 0;
    }
}

int main() {
    int arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    moveZeroesToEnd(arr, n);

    cout << "Output array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}