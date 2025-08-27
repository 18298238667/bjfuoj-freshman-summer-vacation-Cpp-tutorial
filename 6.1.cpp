#include <iostream>
#include <vector>
#include <set>
using namespace std;

void printset(const set<int>& s) {
    for (auto it = s.begin(); it != s.end(); ++it) {
        if (next(it) != s.end()) {
            cout << *it << " ";
        } else {
            cout << *it;
        }
        
    }
    cout << endl;
}
int main(){
    int n, m;
    while (cin>>n>>m){
        vector<int> v(m+n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        for (int i = n; i < m+n; i++)
        {
             cin>>v[i];
        }
        set<int> s(v.begin(), v.end());
        printset(s);
    }
     
    return 0;
}