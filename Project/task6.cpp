#include <iostream>
#include <unordered_set>
using namespace std;

int longestConsecutive(int arr[], int n) {
    unordered_set<int> s;
    for (int i = 0; i < n; i++) {
        s.insert(arr[i]);
    }
    int best = 0;
    for (int num : s) {
        if (s.find(num - 1) == s.end()) {
            int current = num;
            int count = 1;
            while (s.find(current + 1) != s.end()) {
                current++;
                count++;
            }
            if (count > best) {
                best = count;
            }
        }
    }
    return best;
}

int main() {
    int example1[] = {100, 4, 200, 1, 3, 2};
    cout << longestConsecutive(example1, 6) << "\n";
    int example2[] = {19, 13, 15, 12, 18, 14, 17, 11};
    cout << longestConsecutive(example2, 8) << "\n";
    return 0;
}
