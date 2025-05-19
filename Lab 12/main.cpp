#include <iostream>
using namespace std;

void reverse(int arr[], int size) {
    int left  = 0;
    int right = size - 1;

    while (left < right) {
        int temp    = arr[left];
        arr[left]   = arr[right];
        arr[right]  = temp;

        left++;
        right--;
    }
}

int main() {
    int nums[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(nums) / sizeof(nums[0]);  // length of array

    for (int i = 0; i < n; i++) cout << nums[i] << " "; cout << endl;

    reverse(nums, n);

    for (int i = 0; i < n; i++) cout << nums[i] << " "; cout << endl;

    return 0;
}
