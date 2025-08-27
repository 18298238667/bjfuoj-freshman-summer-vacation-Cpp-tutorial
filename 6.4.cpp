#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
	int N;
	cin>>N;
	vector<int> v(N);
	for(int i=0;i<N;i++){
		cin>>v.at(i);
	}
	set<int> s(v.begin(),v.end());
	cout<<s.size()<<endl;
	for(auto it=s.begin();it!=s.end();++it){
		cout<<*it<<' ';
	}
	return 0;
}
