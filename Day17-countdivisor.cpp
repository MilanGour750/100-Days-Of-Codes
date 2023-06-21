#include <iostream>
using namespace std;
int main() {
    int l, r, k;
    cin >> l >> r >> k;
    int count = 0;
    for (int num = l; num <= r; num++) {
        if (num % k == 0) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
