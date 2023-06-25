#include <iostream>
#include <string>
using namespace std;

string findLargestNumber(string num, int k) {
    int n = num.length();
    if (k >= n) {
        return "";
    }
    string result = "";
    int digitsToRemove = k;
    for (char c : num) {
        while (digitsToRemove > 0 && !result.empty() && result.back() < c) {
            result.pop_back();
            digitsToRemove--;
        }
        
        result.push_back(c);
    }
    while (digitsToRemove > 0 && !result.empty()) {
        result.pop_back();
        digitsToRemove--;
    }
    return result;
}
int main() {
    string num;
    int k;
    cin >> num >> k;
    string largestNumber = findLargestNumber(num, k);
    cout << largestNumber << endl;
    return 0;
}
