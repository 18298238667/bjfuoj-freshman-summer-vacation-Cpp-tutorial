#include <iostream>
using namespace std;

int main() {
    long long x, y, z;
    cin >> x >> y >> z;

    long long res = 1 % z;
    x %= z; 

    while (y > 0) {
        if (y % 2 == 1) { 
            res = (res * x) % z; 
        }
        x = (x * x) % z; 
        y /= 2;
    }

    cout << res << endl;
    return 0;
}
