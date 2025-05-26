
#include <iostream>
using namespace std;

int maxProductOfTwo(int numbers[], int count) {
    int highest1 = numbers[0];
    int highest2 = numbers[1];
    if (highest2 > highest1) {
        int temp = highest1;
        highest1 = highest2;
        highest2 = temp;
    }
    int lowest1 = numbers[0];
    int lowest2 = numbers[1];
    if (lowest2 < lowest1) {
        int temp = lowest1;
        lowest1 = lowest2;
        lowest2 = temp;
    }
    for (int i = 2; i < count; i++) {
        int n = numbers[i];
        if (n > highest1) {
            highest2 = highest1;
            highest1 = n;
        } else if (n > highest2) {
            highest2 = n;
        }
        if (n < lowest1) {
            lowest2 = lowest1;
            lowest1 = n;
        } else if (n < lowest2) {
            lowest2 = n;
        }
    }
    int product1 = highest1 * highest2;
    int product2 = lowest1 * lowest2;
    if (product1 > product2) {
        return product1;
    } else {
        return product2;
    }
}

int main() {
    int example[] = {5, -10, -6, 9, 4};
    cout << maxProductOfTwo(example, 5) << "\n";
    return 0;
}
