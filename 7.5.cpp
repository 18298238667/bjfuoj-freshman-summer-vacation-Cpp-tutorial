#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<long long> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	set<long long> s(v.begin(),v.end());
	cout<<s.size()<<'\n';
	for(auto it=s.begin();it!=s.end();it++){
		cout<<*it;
		if(next(it)!=s.end()){
			cout<<' ';
		}
	}
	return 0;
}
