#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                int layer = min(min(i, j), min(N-1-i, N-1-j));
                if (layer == 0) {
                    cout << 'O';
                } else if (layer == 1) {
                    cout << 'J';
                } else {
                    cout << char('a' + layer - 2);
                }
                if (j < N) {
                    cout << ' ';
                }
            }
            cout << endl;
        }
    }
    return 0;
}
