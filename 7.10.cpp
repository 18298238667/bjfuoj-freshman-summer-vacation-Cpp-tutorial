#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        v[i] = n - i; // ��ʼ������Ϊ�������У�����n=3ʱvΪ[3,2,1]
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
