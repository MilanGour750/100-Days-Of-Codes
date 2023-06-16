#include <iostream>
using namespace std;
int main() {
    string word;
    cin >> word;
    int zCount = 0, oCount = 0;
    for (char ch : word) {
        if (ch == 'z')
            zCount++;
        else if (ch == 'o')
            oCount++;
    }
    if (2 * zCount == oCount)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
