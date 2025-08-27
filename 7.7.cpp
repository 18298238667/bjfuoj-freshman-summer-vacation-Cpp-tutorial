#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x1, y1, x2, y2;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        
        long long d = y1 - y2;
        if (d > 6) {
            cout << ">" << endl;
        } else if (d < -6) {
            cout << "<" << endl;
        } else {
            if (d >= 0) {
                long long pow10 = 1;
                for (int i = 0; i < d; i++) {
                    pow10 *= 10;
                }
                long long num1 = x1 * pow10;
                if (num1 > x2) {
                    cout << ">" << endl;
                } else if (num1 < x2) {
                    cout << "<" << endl;
                } else {
                    cout << "=" << endl;
                }
            } else {
                long long pow10 = 1;
                for (int i = 0; i < -d; i++) {
                    pow10 *= 10;
                }
                long long num2 = x2 * pow10;
                if (x1 > num2) {
                    cout << ">" << endl;
                } else if (x1 < num2) {
                    cout << "<" << endl;
                } else {
                    cout << "=" << endl;
                }
            }
        }
    }
    return 0;
}
