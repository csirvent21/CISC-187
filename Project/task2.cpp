
#include <iostream>
using namespace std;

int findMissing(int arr[], int length) {
    // compute expected total 0 + 1 + ... + N
    int expectedSum = length * (length + 1) / 2;
    int actualSum = 0;
    for (int i = 0; i < length; i++) {
        actualSum += arr[i];
    }
    // missing number is the difference
    return expectedSum - actualSum;
}

int main() {
    // this array has all the integers from 0 to 6, but is missing the 4:
    int example1[] = {2, 3, 0, 6, 1, 5};
    cout << findMissing(example1, 6) << "\n";

    // The next example has all the integers from 0 to 9, but is missing the 1:
    int example2[] = {8, 2, 3, 9, 4, 7, 5, 0, 6};
    cout << findMissing(example2, 9) << "\n";

    return 0;
}
