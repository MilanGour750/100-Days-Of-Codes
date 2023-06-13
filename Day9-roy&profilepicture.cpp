#include <iostream>
using namespace std;

int main() {
    int L;
    cin >> L;  // Minimum dimension of the picture
    int N;
    cin >> N;  // Number of photos

    for (int i = 0; i < N; i++) {
        int W, H;
        cin >> W >> H;  // Width and height of the photo

        if (W < L || H < L) {
            cout << "UPLOAD ANOTHER" << endl;
        } else if (W >= L && H >= L) {
            if (W == H) {
                cout << "ACCEPTED" << endl;
            } else {
                cout << "CROP IT" << endl;
            }
        }
    }

    return 0;
}
