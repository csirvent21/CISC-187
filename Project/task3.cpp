
#include <iostream>
using namespace std;

int maxProfit(int prices[], int length) {
    int minPrice = prices[0];
    int bestProfit = 0;
    // loop through prices and update minPrice and bestProfit
    for (int i = 1; i < length; i++) {
        int profit = prices[i] - minPrice;
        if (profit > bestProfit) {
            bestProfit = profit;
        }
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }
    }
    return bestProfit;
}

int main() {
    int example[] = {10, 7, 5, 8, 11, 2, 6};
    cout << maxProfit(example, 7) << "\n";

    return 0;
}
