#include <iostream>
#include <vector>
using namespace std;

int countWays(int n, vector<int>& a, vector<int>& b) {
    int sumA = 0;
    int sumB = 0;

    for (int i = 0; i < n; i++) {
        int x = a[i];
        int y = b[i];

        if (x == -1) {
            sumB += y;
        } else if (y == -1) {
            sumA += x;
        } else {
            sumA += x;
            sumB += y;
        }
    }

    int diff = sumA - sumB;

    if ((diff > 0 && sumB < diff) || (diff < 0 && sumA < -diff)) {
        return -1; // Infinite
    } else if (diff == 0) {
        return 1;
    } else if (diff > 0) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            int y = b[i];
            if (y == -1 || y >= diff) {
                count++;
            }
        }
        return count;
    } else {
        int count = 0;
        for (int i = 0; i < n; i++) {
            int x = a[i];
            if (x == -1 || -x >= -diff) {
                count++;
            }
        }
        return count;
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int result = countWays(n, a, b);

    if (result == -1) {
        cout << "Infinite" << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}
