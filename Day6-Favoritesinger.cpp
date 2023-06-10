#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> playlist(n);
    for (int i = 0; i < n; i++) {
        cin >> playlist[i];
    }
    unordered_map<int, int> singerCount;
    int maxCount = 0;
    for (int i = 0; i < n; i++) {
        singerCount[playlist[i]]++;
        maxCount = max(maxCount, singerCount[playlist[i]]);
    }
    int favoriteSingers = 0;
    for (auto it = singerCount.begin(); it != singerCount.end(); ++it) {
        if (it->second == maxCount) {
            favoriteSingers++;
        }
    }
    cout << favoriteSingers << endl;
    return 0;
}
