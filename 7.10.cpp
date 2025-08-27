#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        v[i] = n - i; // 初始化向量为降序序列，例如n=3时v为[3,2,1]
    }
    do {
        for (int i = 0; i < n; i++) {
            if (i > 0) cout << " ";
            cout << v[i];
        }
        cout << endl;
    } while (prev_permutation(v.begin(), v.end()));
    return 0;
}
