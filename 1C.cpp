#include <iostream>
using namespace std;

int findSmallestNumberWithTrailingZeros(int n) {
    int result = 0;
    int power = 5; // Initialize with the power of 5

    while (n / power > 0) {
        result += n / power;
        power *= 5;
    }

    return result * 5; // Multiply by 5 to get the smallest number
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int smallestNumber = findSmallestNumberWithTrailingZeros(n);

    cout << "Smallest number with at least " << n << " trailing zeroes: " << smallestNumber << endl;

    return 0;
}