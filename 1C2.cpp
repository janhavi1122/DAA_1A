#include <iostream>

using namespace std;

int findSmallestNumberWithTrailingZeroes(int n) {
    int result = 5;
    int count = 0;

    while (count < n) {
        int temp = result;
        while (temp % 5 == 0) {
            count++;
            temp /= 5;
        }
        result++;
    }

    return result - 1;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int smallestNumber = findSmallestNumberWithTrailingZeroes(n);

    cout << "The smallest number with at least " << n << " trailing zeroes in its factorial is: " << smallestNumber << endl;

    return 0;
}
