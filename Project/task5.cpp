
#include <iostream>
using namespace std;

void sortTemperatures(double readings[], int length, double sorted[]) {
    double minTemp = readings[0];
    double maxTemp = readings[0];
    for (int i = 1; i < length; i++) {
        if (readings[i] < minTemp) {
            minTemp = readings[i];
        }
        if (readings[i] > maxTemp) {
            maxTemp = readings[i];
        }
    }
    int bucketCount = int((maxTemp - minTemp) * 10) + 1;
    int* counts = new int[bucketCount];
    for (int i = 0; i < bucketCount; i++) {
        counts[i] = 0;
    }
    for (int i = 0; i < length; i++) {
        int index = int((readings[i] - minTemp) * 10 + 0.5);
        counts[index]++;
    }
    int pos = 0;
    for (int i = 0; i < bucketCount; i++) {
        while (counts[i] > 0) {
            sorted[pos++] = minTemp + i / 10.0;
            counts[i]--;
        }
    }
    delete[] counts;
}

int main() {
    double readings[] = {98.6, 98.0, 97.1, 99.0, 98.9,97.8, 98.5, 98.2, 98.0, 97.1};
    int n = sizeof(readings) / sizeof(readings[0]);
    double sorted[10];
    sortTemperatures(readings, n, sorted);
    for (int i = 0; i < n; i++) {
        cout << sorted[i] << "\n";
    }
    return 0;
}
